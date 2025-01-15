#include <iostream>
#include <vector>
using namespace std;


void bubbleSort(vector<int>& v){
    for (int i=0;i<v.size();i++){
         int didSwap=0;
         for (int j=0;j<v.size()-(i+1);j++){
            if(v[j]>v[j+1]){
                swap(v[j+1],v[j]);
                didSwap=1;
            }
        }
        if(!didSwap){
            return;
        }
    }
}
int main(){
    vector<int> v = {1,2,3,4,5};
    bubbleSort(v);
    for (int e:v){
        cout<<e<<endl;
    }
}