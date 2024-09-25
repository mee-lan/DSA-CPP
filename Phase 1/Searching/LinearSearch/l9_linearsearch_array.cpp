#include <iostream>
using namespace std;

bool search(int arr[],int size, int num)
{
    int i,flag=0;
    for (i=0;i<size;i++){
        if(num==arr[i]){
            flag=1;
            
        }
    }
    return flag;
}

int main()
{
    int n;
    cin>>n;
    int arr[10]={5,7,8,-2,21,51,5,1,51,51};
    int val =search(arr,10,n);
    if (val){
        cout<<"foouond";
    }
    else cout<<"NOT found";
}