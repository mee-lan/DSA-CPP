#include <iostream>
using namespace std;

int main(){
    int arr[5]= {1,5,3,20,8};

    for (int i=0;i<4;i++){
        int minIndex =i;

        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for (int i:arr){
        cout<<i<<endl;
    }
}