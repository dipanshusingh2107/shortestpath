#include<iostream>
#include<list>
#include<utility>
using namespace std;


void shortest_path(list< pair<int,int> > graph[],int src,int dest,int n)
{
    long long int distance[n+1];  //distance of i node from source

    for(int i=0;i<=n;i++)    //setting value to infinity
    distance[i]=9999999;

    distance[src]=0;
    int parent[n+1];
    parent[src]=-1;


    for(int i=1;i<=n;i++)
    {
        for(auto j:graph[i])           // i->j.first   i links to j.first 
        {
            if(distance[i]+j.second<distance[j.first])  //j.second contains weight
            {
                distance[j.first]=distance[i]+j.second;  
                parent[j.first]=i;
            }
        }
    } 

        cout<<"min weight: "<<distance[dest];

}


int main()
{
    int n,e;   //n= no of nodes e= no of edges
    cout<<"enter no. of nodes";
    cin>>n;
    cout<<"enter no. of edges";
    cin>>e;

    list<pair<int,int> >graph[n+1];
 cout<<"Enter Edges u and v and Weights w \n";
    for(int i=1,u,v,w;i<=e;i++)
    {
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    int src,dest;
    cout<<"Enter source and dest ";
    cin>>src>>dest;
    shortest_path(graph,src,dest,n);

    return 0;
}