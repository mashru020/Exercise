#include<bits/stdc++.h>
using namespace std;
list<int>adj[100];
char color[100];
int d[100];
int low[100];
stack<int>points;
int t=0;
int pre[100];
map<pair<int,int>,bool>bridze;
void dfs_visited(int source)
{
    low[source]=d[source]=++t;
    color[source]='g';
    list<int>::iterator it;
    for(it=adj[source].begin();it!=adj[source].end();++it)
    {
        if(color[*it]=='w')
        {
            pre[*it]=source;
            dfs_visited(*it);
            if(source==1 && d[source]<low[*it] && adj[source].size()>1)
            {
                //cout<<adj[source].size()<<endl;
                points.push(1);
            }
            else if(d[source]<=low[*it] && source!=1)
            {
                points.push(source);
            }
            if(source==1 && d[source]<low[*it] && adj[source].size()>1)
            {
                //cout<<adj[source].size()<<endl;
                bridze[make_pair(source,*it)]=true;
            }
            else if(d[source]<low[*it] && source!=1)
            {
                bridze[make_pair(source,*it)]=true;
            }
            if(low[source]>low[*it])
            {
               low[source]=low[*it];
            }
        }
        else if(color[*it]=='g' && pre[source]!=*it)
        {
            low[source]=min(d[*it],low[source]);
        }
    }
    color[source]='b';
}
void articulation(int node)
{
    for(int i=1;i<=node;i++)
    {
        color[i]='w';
        d[i]=(1.0/0.0);
        low[i]=(1.0/0.0);
        pre[i]=1.0/0.0;
    }
    for(int i=1;i<=node;i++)
    {
        if(color[i]=='w')
        {
            dfs_visited(i);
        }
    }
}
int main()
{
    int node,edge;
        cout<<"input node numbers : ";
        cin>>node;
        cout<<"input edge numbers : ";
        cin>>edge;
        list<int>adj[node+1];
        t=0;
        map<pair<int,int>,bool>vis;
        for(int i=1;i<=edge;i++)
        {
            cout<<"edge "<<i<<" : ";
            int u,y,k,z=1,e=0;
            scanf("%d %d", &u, &k);
            adj[u].push_back(k);
            adj[k].push_back(u);

        }
    articulation(node);
    while(!points.empty())
    {
        cout<<"Articulation points are : "<<points.top()<<endl;
        points.pop();
    }
    cout<<endl<<endl;
    map<pair<int,int>,bool>::iterator it;
    for(it=bridze.begin();it!=bridze.end();++it)
    {
        cout<<"Bridzes are : ";
        cout<<it->first.first<<" -> "<<it->first.second<<" "<<endl;
    }
    return 0;
}

