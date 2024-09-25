#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){

for (int i=0;i<size-1;i++){
int minIndex=i;

    for(int j=i+1;j<size;j++){

        if (arr[minIndex]>arr[j])
        swap(arr[minIndex],arr[j]);
    }
}

}
int main(){
int arr[5]={99,4,1,56,6};
selectionSort(arr,5);
for (int i=0;i<5;i++){
    cout<<arr[i]<<endl;
}
}