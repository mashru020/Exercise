/*graph input*/
#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int adj[100][100];
void bfs(int v, int s)
{
    int clr[100],pre[100],d[v];
    int i,u;
    for(i=1;i<=v;i++)
    {
        clr[i]=0;
        pre[i]=-1;
        d[i]=2000000;
    }
    clr[s]=1;
    d[s]=0;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(i=1;i<=v;i++)
        {
            if(adj[u][i]==1)
            {
                if(clr[i]==0)
                {
                    clr[i]=1;
                    d[i]=d[u]+1;
                    pre[i]=u;
                    Q.push(i);
                }

            }
        }
        clr[u]=2;
        cout<<"ssssssssss"<<endl;
    }
    for(i=1;i<=v;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(i=1;i<=v;i++)
    {
        printf("%d ",clr[i]);
    }
    printf("\n");
    for(i=1;i<=v;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n");
    for(i=1;i<=v;i++)
    {
        printf("%d ",pre[i]);
    }
    printf("\n");
}
int main()
{
    int v,a,b,i,j;
    printf("Input Number of Vertex :");
    scanf("%d",&v);
    int k=1;
    do
    {
        printf("Edge %d :",k);
        scanf("%d %d",&a,&b);
        if(a>v || b>v)
        {
            printf("Invalid Input Try Again..\n");
        }
        else
        {
            adj[a][b]=1;
            adj[b][a]=1;
            k++;
        }
    }while(a!=0 || b!=0);
    for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {
            printf("%d ",adj[i][j]);
        }
        printf("\n");

    }
    int s;
    printf("Enter source :");
    scanf("%d",&s);
    bfs(v,s);

}
