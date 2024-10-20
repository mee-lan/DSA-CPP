#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;



stack<int> utilSort(vector<int> adjList[],int vertex,int index,vector<bool>& visitedList,stack<int> s){
    visitedList[index]=1;
     //if ()
     for (int i=0;i<adjList[index].size();i++){
        if (!visitedList[adjList[index][i]]==1){
            s=utilSort(adjList,vertex,adjList[index][i],visitedList,s);
        }
    }
    s.push(index);
    return s;
}
//TOPOLOGICAL SORT
vector<int> topologicalSort(vector<int> adjList[],int vertex){
    vector<bool> visitedList(vertex,0);
    stack<int> s;
    for (int i=0;i<vertex;i++){
        if (!visitedList[i]){
            s=utilSort(adjList,vertex,i,visitedList,s);
        }
    }

    vector<int> v;
    while (!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    return v;
}

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
       // if (u!=v) adjList[v].push_back(u);
    }
    cout<<"Adjacency Lisst is:\n";
        for(int i=0;i<vertex;i++){
        cout<<"Index:"<<i<<endl;
        for(int j=0;j<adjList[i].size();j++){

         cout<<adjList[i][j]<<"\t";                         //printing pair
         }
         cout<<"\n";
    }

    cout<<"Sorted List:\n";
    vector<int> ans = topologicalSort(adjList,vertex);
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\t";
    }
}
