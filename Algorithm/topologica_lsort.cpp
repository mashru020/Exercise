#include<bits/stdc++.h>
using namespace std;
list<int>sagor;
char color[200];
int t;
int d[100];
int f[100];
void dfs_visited(list<int>*adj,int node,int source)
{
    list<int>::iterator it;
    color[source]='g';
    ++t;
    d[source]=t;
    for(it=adj[source].begin();it!=adj[source].end();++it)
    {
        if(color[*it]=='w')
        {
            dfs_visited(adj,node,*it);

        }
    }
    ++t;
    f[source]=t;
    sagor.push_front(source);
}
void dfs(list<int>*adj,int node)
{
    for(int i=1;i<=node;i++)
    {
        color[i]='w';
    }
    t=0;
    for(int i=1;i<=node;i++)
    {
        if(color[i]=='w')
        {
            dfs_visited(adj,node,i);
        }
    }
    ///dfs_visited(adj,node,source);
}
int main()
{
    int node,edge;
    cin>>node;
    list<int>adj[node+1];
    while(1)
    {
        int x,y;
        cin>>x>>y;
        if(x==0 && y==0)
        {
            break;
        }
        adj[x].push_back(y);
    }
    int source;
   dfs(adj,node);
   list<int>::iterator it;
   for(it=sagor.begin();it!=sagor.end();++it)
   {
       cout<<*it<<" ";
   }
   cout<<endl;
    return 0;
}
