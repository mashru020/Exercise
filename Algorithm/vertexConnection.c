/*two vertex connected or not*/
#include<stdio.h>
int main()
{
	int adj[100][100];
	int v,i,a,b,j;
	printf("Input No of Vertex :");
	scanf("%d",&v);
	int k=1;
	do
	{
		printf("Edge %d :",k);
		scanf("%d %d",&a,&b);
		if(a>v  || b>v || a==0 ||b==0)
			printf("Invalid Input Try again....\n");
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

    int U,V;
	printf("Input vertex 1 :");
	scanf("%d",&U);
	printf("Input vertex 2 :");
	scanf("%d",&V);
	if(adj[V][U]==1)
		printf("Vertex %d and Vertex %d are connected.",U,V);
	else
		printf("Vertex %d and Vertex %d are not connected.",U,V);
}
