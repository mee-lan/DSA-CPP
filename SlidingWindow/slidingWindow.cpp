#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr = {1,2};
    int k =4;
    int sum=0;

    int front = 0;
    int back=k-1;

    for (int i=front;i<=back;i++){
        sum+=arr[i];
    }
    int temp=0;
    while(front<(arr.size()-1) && back < (arr.size()-1)){
        back++;
        // cout<<"back"<<arr[back]<<"front"<<arr[front]<<endl;
        temp= sum+arr[back]-arr[front];
        front++;
        sum = max(temp,sum);
    }
    cout<<sum;
}