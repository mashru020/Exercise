#include<iostream>
#include<list>
using namespace std;
list<int>adj[100];
int time=0;
int color[100],prev[100],d[100],f[100];
int tree=0,Back=0,Forward=0,cross=0;

void DFS_visit(int n)
{
    list<int>::iterator it;
    color[n]=1;
    time=time+1;
    d[n]=time;
    for(it=adj[n].begin();it!=adj[n].end();it++){
        int k=*it;
        if(color[k]==0){
            prev[k]=n;
            tree++;
            DFS_visit(k);

        }
        else if(color[n]==1&&color[k]==1){
            Back++;
        }
        else if(color[n]==1&&color[k]==2){
            if(d[n]<d[k]){
                Forward++;
            }
            else{
                cross++;
            }
        }
    }
    color[n]=2;
    time=time+1;
    f[n]=time;
    return;

}
void DFS_graph(int v)
{
    for(int i=1;i<=v;i++){
        color[i]=0;
        prev[i]=0;
        d[i]=-1;
        f[i]=-1;
    }
    for(int i=1;i<=v;i++){
        if(color[i]==0){
            DFS_visit(i);
        }
    }
}
int main()
{
    list<int>::iterator it;
    int v;
    cout<<"Input of vertex: ";
    cin>>v;
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
            adj[m].push_back(n);
        }
        else{
            adj[m].push_back(n);
        }
    }
    for(int i=1;i<=v;i++){
        cout<<"adj["<<i<<"]";
        for(it=adj[i].begin();it!=adj[i].end();it++){
            cout<<"->"<<*it;
        }
        cout<<endl;

    }
    DFS_graph(v);

    /*for(int i=1;i<=v;i++){
        cout<<i<<": "<<"discoved time->"<<d[i]<<"   "<<"finising time->"<<f[i]<<endl;
    }
    cout<<endl;
    for(int i=1;i<=v;i++){
        cout<<i<<" : "<<"prev note->"<<prev[i]<<endl;
    }
    cout<<endl;


    /*for(int i=1;i<=v;i++){
        for(it=adj[i].begin();it!=adj[i].end();it++){
            int k=*it;
            if(prev[k]==i){
                if(d[i]<d[k]&&d[k]<f[k]&&f[k]<f[i]){
                    cout<<i<<" and "<<k<<" Note Is Tree"<<endl;
                }
            }
            else{
                int u=k,v=i;
                if(d[v]<d[u]&&d[u]<f[u]&&f[u]<f[v]){
                    cout<<u<<" and "<<v<<" Note Is Black"<<endl;
                }
                else{
                    u=i;v=k;
                    if(d[u]<d[v]){
                        cout<<u<<" and "<<v<<" Note Is Forward"<<endl;
                    }
                    else if(d[u]>d[v]){
                        cout<<u<<" and "<<v<<" Note Is Cross"<<endl;
                    }
                }
            }
        }
    }
    cout<<endl;
    */
    cout<<"Total Tree edges: ";
    cout<<tree<<endl;
    for(int i=1;i<=v;i++){
        for(it=adj[i].begin();it!=adj[i].end();it++){
            int k=*it;
            if(d[i]<d[k]&&d[k]<f[k]&&f[k]<f[i]){
                cout<<i<<"->"<<k<<" ";
                }
            }
    }
    cout<<endl;
    cout<<"Total Back edges: ";
    cout<<Back<<endl;
    for(int i=1;i<=v;i++){
        for(it=adj[i].begin();it!=adj[i].end();it++){
            int k=*it;
            if(d[k]<d[i]&&d[i]<f[i]&&f[i]<f[k]){
                cout<<i<<"->"<<k<<" ";
                }
            }
    }
    cout<<endl;
    /*cout<<"Total Forward edges: ";
    cout<<Forward<<endl;
    for(int i=1;i<=v;i++){
        for(it=adj[i].begin();it!=adj[i].end();it++){
            int k=*it;
            if(d[k]<d[i]&&d[i]<f[i]&&f[i]<f[k]){
                cout<<i<<"->"<<k<<" ";
                }
            }
    }*/
    cout<<"Total Cross edges: ";
    cout<<cross<<endl;
    for(int i=1;i<=v;i++){
        for(it=adj[i].begin();it!=adj[i].end();it++){
            int k=*it;
            if(d[k]<f[k]&&f[k]<d[i]&&d[i]<f[i]){
                cout<<i<<"->"<<k<<" ";
                }
            }
    }
}

