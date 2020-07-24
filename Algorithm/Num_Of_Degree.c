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
//maximum out degree
        int outmax=0;
        int omn=0;
    for(i=1;i<=v;i++)
    {
        int out=0;
        for(j=1;j<=v;j++)
        {
            if(adj[i][j]==1)
            {
                out++;
                if(outmax<out)
                {
                    outmax=out;
                    omn=i;
                }
            }
        }
        printf("out Degree of %d : %d \n",i,out);

    }
    printf("Maximun out Degree of %d : %d\n",omn,outmax);
        int inmax=0;
        int imn=0;
    for(i=1;i<=v;i++)
    {
    	int in=0;
        for(j=1;j<=v;j++)
        {
            if(adj[j][i]==1)
            {
                in++;
                if(inmax<in)
                {
                    inmax=in;
                    imn=i;
                }
            }
        }
        printf("In Degree of %d : %d \n",i,in);

    }
     printf("Maximun In Degree of %d : %d\n",imn,inmax);
//Minimum out degree
	int outmin=v;
	int min=0;
	for(i=1;i<=v;i++)
    	{
        		int out=0;
       	 	for(j=1;j<=v;j++)
        		{
            		if(adj[i][j]==1)
            			out++;
        		}
		printf("out Degree of %d : %d \n",i,out);
		if(outmin>out)
                	{
                    	outmin=out;
                    	min=i;
                	}
            }
    	printf("Minimun out Degree of %d : %d\n",min,outmin);
    	//Miniimum in degree
       		int inmin=v;
		int imin=0;
    		for(i=1;i<=v;i++)
    		{
    			int in=0;
        			for(j=1;j<=v;j++)
        			{
				if(adj[j][i]==1)
				in++;
        			}
			if(inmin>in)
                		{
                    		inmin=in;
                    		imin=i;
                		}
        			printf("In Degree of %d : %d \n",i,in);

    		}
     		printf("Maximun In Degree of %d : %d\n",imin,inmin);
}

