#include <iostream>
#include <vector>
using namespace std;


//1. unweighted

// int main(){
//     int vertex,edges;

//     cout<<"enter vertex and edges"<<endl;
//     cin>>vertex>>edges;

//     vector<int> adjList[vertex];

//     cout<<"Enter edge links : like: 0<space>1 , 0<space>2";

//     int u ,v;
//     for(int i=0;i<edges;i++){
//         cout<<"\n";
//         cin>>u>>v;
//         adjList[u].push_back(v);
//         if (u!=v) adjList[v].push_back(u);
//     }

//         cout<<"Adjacency Lisst is:\n";
//         for(int i=0;i<vertex;i++){
//         cout<<"Index:"<<i<<endl;
//         for(int j=0;j<adjList[i].size();j++){

//          cout<<adjList[i][j]<<"\t";
//          }
//          cout<<"\n";
//     }
// }




//2. Weighted
int main(){
    int vertex,edges;

    cout<<"enter vertex and edges"<<endl;
    cin>>vertex>>edges;

    vector<pair<int,int>> adjList[vertex];

    cout<<"Enter edge links : like: 0<space>1<space>weight , 0<space>2<space>weight";

    int u ,v,weight;
    for(int i=0;i<edges;i++){
        cout<<"\n";
        cin>>u>>v>>weight;
        adjList[u].push_back(make_pair(v,weight));                // way to store pair
        if (u!=v) adjList[v].push_back(make_pair(u,weight));
    }

        cout<<"Adjacency Lisst is:\n";
        for(int i=0;i<vertex;i++){
        cout<<"Index:"<<i<<endl;
        for(int j=0;j<adjList[i].size();j++){

         cout<<adjList[i][j].first<<"\t";                         //printing pair
         cout<<adjList[i][j].second<<"\t";
         }
         cout<<"\n";
    }
}
