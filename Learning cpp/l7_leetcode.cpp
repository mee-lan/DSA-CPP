#include <iostream>
using namespace std;
int main(){
    // int n,i,x,bit,c=0;
    // cout<<"Enter your number";
    // cin>>n;
    // x=n;
    // while (x!=0){
    //     c= (c<<1)|1;
    //     x=x>>1;
    // }
    // int ans= (~n)&c;
    // cout <<ans;

    int n,sum=1,flag,a=2;
    cin>>n;
    while (sum<INT32_MAX){
        if (sum>n){
            flag=1;
            break;
        }
        else{
            if(sum==n){
            flag=0;
            break;
        }
        sum=sum*2;
       
        }
    }
    cout<<flag;
}