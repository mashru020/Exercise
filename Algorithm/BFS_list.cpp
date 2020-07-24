#include<iostream>
#include<list>
#include<queue>
using namespace std;
int adj[100][100];
list<int>::iterator it;
int prev[100],d[100],color[100];

void BFS(int s,int v)
{
    for(int i=1;i<=v;i++){
        prev[i]=1;
        color[i]=0;
        d[i]=0;
    }
    queue<int> q;
    color[s]=1;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=1;i<=v;i++){
            int k=adj[u][i];
            if(k==1&&color[i]==0){
                color[i]=1;
                prev[i]=u;
                d[i]=d[u]+1;
                q.push(i);

            }
        }
        color[u]=2;
    }

}

int main()
{
    int v;
    cout<<"Vertex: ";
    cin>>v;
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            adj[i][j]=0;
        }
    }
    for(int i=1;;i++){
        int m,n;
        cout<<"Edge "<<i<<": ";
        cin>>m>>n;
        if(m==0&&n==0){
            break;
        }
        else if(m>v||n>v){
            cout<<"Please Right Input: ";
            cout<<"Edge "<<i++<<": ";
            cin>>m>>n;
            adj[m][n]=1;
            adj[n][m]=1;
        }
        else{
            adj[m][n]=1;
            adj[n][m]=1;
        }
    }
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Input Source: ";
    int s;
    cin>>s;
    BFS(s,v);
    cout<<"Color: ";
    for(int i=1;i<=v;i++){
        cout<<color[i]<<" ";
    }
    cout<<endl;
    cout<<"Cost: ";
    for(int i=1;i<=v;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    cout<<"Previous: ";
    for(int i=1;i<=v;i++){
        cout<<prev[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=v;i++){
        if(d[i]%2==0){
            cout<<i<<" Node Is Even Cost"<<endl;
        }
        else{
            cout<<i<<" Node Is ODD Cost"<<endl;
        }
    }
    cout<<endl;
    int Max=0;
    for(int i=1;i<=v;i++){
        if(Max<d[i]){
            Max=d[i];
        }
    }
    for(int i=1;i<=v;i++){
        if(d[i]==Max){
            cout<<i<<" Node Is Maximun"<<endl;
        }
    }


}



