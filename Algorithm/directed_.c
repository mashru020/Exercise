/*graph input*/
#include<stdio.h>
int main()
{
    int adj[100][100];
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
    int flag=0;
    for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {
            if(adj[i][j]!=adj[j][i])
            {
                flag=1;
                printf("Directed..\n");
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("undirected..\n");
    }

}

