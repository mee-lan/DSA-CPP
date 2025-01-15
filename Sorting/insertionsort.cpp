#include <iostream>
#include <vector>
using namespace std;

// 0,1,3,5,2,10

void insertionSort(vector<int>& v){
    for (int i=0;i<v.size()-1;i++){
        int current=i;
        while(current>=0 && v[current]>v[current+1]){
            swap(v[current],v[current+1]);
            current--;
        }
    }
}

int main(){
    vector<int> v = {1,10,9,8,2,3,4,5,0};
    insertionSort(v);
    for (int e:v){
        cout<<e<<endl;
    }
}