#include<list>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int v,i,a,b;
    list<int>adj[100];
    list<int>::iterator it;
    printf("Input Number of vertex :");
    scanf("%d",&v);
    int k=1;
    do
    {
        printf("Edge %d :",k);
        scanf("%d %d",&a,&b);
        if(a>v || b>v ||a<0||b<0)
        {
            printf("Invalid Input Try Again..\n");
        }
        else
        {
            adj[a].push_back(b);
            adj[b].push_back(a);
            k++;
        }
    }while(a!=0 || b!=0);
        for(i=1;i<=v;i++)
        {
            printf("Adj[%d]",i);
            for(it=adj[i].begin();it!=adj[i].end();it++)
            {
                printf("->%d",*it);
            }
            printf("\n\n");
        }

}

