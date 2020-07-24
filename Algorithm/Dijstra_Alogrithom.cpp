#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include<list>
using namespace std;
list<int> adj[100];
int w[100][100],xx=0;
int d[100],prev[100];
int v=0;
 int oo=0;
int dijstra(int s,int v)
{

    list<int>::iterator it;
    for(it=adj[s].begin();it!=adj[s].end();it++){
        if(d[*it]>(d[s]+w[s][*it])){
            d[*it]=( d[s]+w[s][*it] );
            prev[*it]=s;
            //cout<<d[*it]<<xx<<v<<endl;

            dijstra(*it,v);

        }

    }
}

int main()
{
    FILE *p=fopen("input.txt","r");
    FILE *q=fopen("ouput.txt","w");
    for(int i=1;;i++){
        int m,n,weight;
        //fprintf(p,"2 Edge and 1 Weight %d: ",&i);
        //cout<<"2 Edge and 1 Weight "<<i<<": ";
        //cin>>m>>n>>weight;
        fscanf(p,"%d%d%d",&m,&n,&weight);
        if(n>v){
            v=n;
        }
        if(m==0&&n==0){
            break;
        }
        else{
            adj[m].push_back(n);
            adj[n].push_back(m);
            w[m][n]=weight;
            w[n][m]=weight;
        }
    }
    cout<<"Input source node: ";
    int k;
    cin>>k;
   int s=k;
    d[s]=0;
    prev[s]=-1;
    for(int i=1;i<=v;i++){
            if(i!=k){
        d[i]=999;
            }
    }
    for(int i=1;i<=v;i++){

        dijstra(i,v);

    }
    //cout<<d[1]<<endl;
//    if(d[1]<oo){
//            xx++;
//            //cout<<12136<<endl;
//        break;
//    }


    //cout<<12136<<endl;
    /*for(int i=1;i<=v;i++){
        cout<<"Node "<<i<<": ("<<"Cost->"<<d[i]<<" previous->"<<prev[i]<<")"<<endl;
    }*/
    //cout<<"Shortest Path of This Graph Is!!!"<<endl;


    fprintf(q,"Shortest Path of This Graph Is!!!\n");
    for(int i=1;i<=v;i++){
        if(prev[i]>=0){
          //cout<<prev[i]<<" To "<<i<<" Weight("<<d[i]<<")"<<endl;
          fprintf(q,"%d To %d Weight(%d)\n",prev[i],i,d[i]);
        }
    }
cout<<"Input destination node: ";
int w;
cin>>w;
cout<<w<<"<--";
for(int i=k;;i++){
    w=prev[w];
    if(w==k){
        cout<<w;
        break;
    }
    cout<<w<<"<--";
}
}


