#include<stdio.h>

int main()
{
    int adj[100][100],even[100],odd[100];
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
int e=1;
int o=1;
    for(i=1;i<=v;i++)
    {
        int out=0;
        for(j=1;j<=v;j++)
        {
            if(adj[i][j]==1)
            {
                out++;
            }
        }
        if(out%2==0)
        {
        	even[e]=i;
        	e++;
        }
        else if(out%2==1)
        {
        	odd[o]=i;
        	o++;
        }

        printf("out Degree of %d : %d \n",i,out);

    }
    printf("even out degree node :");
    for(i=1;i<e;i++)
    {
    	 printf("%d",even[i]);
    }
        	 printf("\n");
printf("odd out degree node :");
    for(i=1;i<o;i++)
    {
    	 printf("%d,",odd[i]);
    }
        	 printf("\n");
}

