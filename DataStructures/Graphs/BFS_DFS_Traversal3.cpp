#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void utilDFS(vector<int> adjList[],int index,int vertex,vector<bool>& visitedList){
     
         cout<<index<<"\t";
         visitedList[index]=1;

    for (int i=0;i<adjList[index].size();i++){
        if (visitedList[adjList[index][i]]==1) continue;
        utilDFS(adjList,adjList[index][i],vertex,visitedList);
    }
    
}
void DFSTraversal(vector<int> adjList[],int index,int vertex){
   vector<bool> visitedList(vertex,0);
   utilDFS(adjList,index,vertex,visitedList);
}
void BFSTraversal(vector<int> adjList[],int index,int vertex){

    queue<int> q;
    int i =0;
    vector<bool> visitedList(vertex,0);

    q.push(index);
    visitedList[index]=true;


    while (!q.empty()){
    cout<<q.front()<<"\t";
    
    for (int i=0; i<adjList[q.front()].size();i++){
     if (visitedList[adjList[q.front()][i]]!=1) {
        q.push(adjList[q.front()][i]);
        visitedList[adjList[q.front()][i]]=1;
     }
     q.pop();
    }
   }
}
    //BFSTraversal(adjList,q.front());

//2. Weighted
int main(){
     int vertex,edges;
     cout<<"enter vertex and edges"<<endl;
     cin>>vertex>>edges;
     vector<int> adjList[vertex];

     cout<<"Enter edge links : like: 0<space>1<space>weight , 0<space>2<space>weight";
     int u ,v;
     for(int i=0;i<edges;i++){
        cout<<"\n";
        cin>>u>>v;
        adjList[u].push_back(v);                
        if (u!=v) adjList[v].push_back(u);
    }
    cout<<"Adjacency Lisst is:\n";
        for(int i=0;i<vertex;i++){
        cout<<"Index:"<<i<<endl;
        for(int j=0;j<adjList[i].size();j++){

         cout<<adjList[i][j]<<"\t";                         //printing pair
         }
         cout<<"\n";
    }
    DFSTraversal(adjList,0,vertex);


}
