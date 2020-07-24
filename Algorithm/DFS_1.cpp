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
	cout<<"Dis :"<<time<<endl;
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
            		cout<<"Finish :"<<time<<endl;
            		f[u]=time;
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


}
