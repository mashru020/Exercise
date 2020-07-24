#include<iostream>
using namespace std;
int adj[100][100],v;
int color[100],time,prev[100],d[100],f[100];
void DFS_Visit(int u);
void DFS(int s)
{

	for(int i=1;i<=v;i++)
	{
		color[i]=0;
		prev[i]=-1;
		d[i]=-1;
		f[i]=-1;
	}
	time=0;
	for(int i=1;i<=v;i++)
	{
		if(color[i]==0)
			DFS_Visit(i);
	}
}
void DFS_Visit(int u)
{
	color[u]=1;
	time++;
	//cout<<"Dis :"<<time<<endl;
	d[u]=time;
	for(int i=1;i<=v;i++)
		{
            		int k=adj[u][i];
            		if(k==1&&color[i]==0)
            		{
            			prev[i]=u;
            			DFS_Visit(i);
            		}
		}
            		color[u]=2;
            		time++;
            		//cout<<"Finish :"<<time<<endl;
            		f[u]=time;
}
void Edge()
{
    int TE,BE,FE,CE,E,t,b,f,c;
    E=v*v;
    TE=0;
    FE=0;
    BE=0;
    CE=0;
    t=0;b=0;f=0;c=0;
    int te[2][64],be[2][64],fe[2][64],ce[2][64];

    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            if(adj[i][j]==1)
            {
                if(d[i]<d[j]&&f[i]>f[j]&&prev[j]==i)
                {
                    TE++;
                    te[0][t]=i;
                    te[1][t]=j;
                    t++;
                }
                else
                {
                    if(d[i]>d[j]&&f[i]<f[j])
                    {
                        BE++;
                        be[0][t]=i;
                        be[1][t]=j;
                        b++;
                    }
                    else if(d[i]<d[j]&&f[i]>f[j]&&prev[j]!=i)
                    {
                        FE++;
                        fe[0][t]=i;
                        fe[1][t]=j;
                        f++;
                    }
                    else if(d[i]>d[j]&&f[i]>f[j])
                    {
                        CE++;
                        ce[0][t]=i;
                        ce[1][t]=j;
                        c++;
                    }
                }
            }
        }

    }
    cout<<"Tree Edge :"<<TE<<endl;
    cout<<"Back Edge :"<<BE<<endl;
    cout<<"Forward Edge :"<<FE<<endl;
    cout<<"Cross Edge :"<<CE<<endl;
    cout<<"TREE EDGE"<<endl;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<te[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"BACK EDGE"<<endl;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<be[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"FORWARD EDGE"<<endl;
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<fe[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"CROSS EDGE"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<ce[i][j]<<" ";
        }
        cout<<endl;
    }

}
void DFS_Display()
{
	cout<<"Vertex    :";
	for(int i=1;i<=v;i++)
	{
		cout<<i<<"  ";
	}
	cout<<endl;
	cout<<"Color     :";
	for(int i=1;i<=v;i++)
	{
		cout<<color[i]<<"  ";
	}
	cout<<endl;
	cout<<"Discover  :";
	for(int i=1;i<=v;i++)
	{
		cout<<d[i]<<"  ";
	}
	cout<<endl;
	cout<<"Finish    :";
	for(int i=1;i<=v;i++)
	{
		cout<<f[i]<<" ";
	}
	cout<<endl;
	cout<<"Previous  :";
	for(int i=1;i<=v;i++)
	{
		cout<<prev[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a,b,i,j,k,s;
	cout<<"Input Vertex Number :";
	cin>>v;
	k=1;
	do
	{
		cout<<"Edge "<<k<<" : ";
		cin>>a>>b;
		if(a<=0 || b<=0 || a>v || b>v)
		{
			cout<<"Invalid Input... try agayn... "<<endl;
		}
		else
		{
			adj[a][b]=1;
			k++;
		}
	}while(a!=0 && b!=0);
	for(i=1;i<=v;i++)
	{
        		for(j=1;j<=v;j++)
		{
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Input Source For DFS :";
	cin>>s;
	DFS(s);
	DFS_Display();
	Edge();


}
