#include <iostream>
#include <vector>
using namespace std;




int main(){
    int vertex,edges;


    cout<<"enter vertex and edges"<<endl;
    cin>>vertex>>edges;

    vector<vector<bool>>adjMat(vertex,vector<bool>(vertex,0)); //Each row is a vertex<bool> of size (vertex) and each vertex contains (vertex) elements and initialized to 0 
   // vector<vector<int>> adjMat(vertex,vector<int>(vertex,0)); weighted ko lagi 

    cout<<"Enter edge links : like: 0<space>1 , 0<space>2";

    int u ,v;
    for(int i=0;i<edges;i++){
        cout<<"\n";
        cin>>u>>v;        //cin>>u>>v>>weight; for weighted 
        adjMat[u][v]=1;   //adjMat[u][v]=weight;
        adjMat[v][u]=1;   //NO need of this for directed graph
    }

     cout<<"Adjacency matrix is:\n";
     for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
         cout<<adjMat[i][j]<<"\t";
         }
         cout<<"\n";
    }
}