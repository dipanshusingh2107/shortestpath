#include<iostream>
#include<list>
#include<utility>
using namespace std;


void shortest_path(list<pair<int,int>> graph[],int source,int dest,int n)
{
    long long int distance[n+1]={9999999};  //distance of i node from source
    distance[source]=0;   

}


int main()
{
    int n,e;   //n= no of nodes e= no of edges
    cout<<"enter no. of nodes";
    cin>>n;
    cout<<"enter no. of edges";
    cin>>e;

    list<pair<int,int>>graph[n+1];

    for(int i=1,u,v,w;i<=e;i++)
    {
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }



    return 0;
}