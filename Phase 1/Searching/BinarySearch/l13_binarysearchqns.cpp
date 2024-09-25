/// *** FIRST AND LAST OCCURENCE PROBLEM......



#include <iostream>
using namespace std;

// int searchFirstOccur(int arr[], int size,int element)
// {
//     int start=0;
//     int end=size-1;
//     int mid=start  + (end-start)/2;
//     int ans=-1;

//     while (start<=end){

//     if(arr[mid]==element){

//         //FIRST OCCURENCE NIKALNE....
//         //yaha return hataune ani tala return ans garne return -1 ko satta.
//         ans = mid;
//         end=(mid-1);
        
//     }
//     else if(element>arr[mid]){
//         start=(mid+1);
//     }
//     else if (element<arr[mid]){
//         end=(mid-1);
//     }
//     mid=start  + (end-start)/2;
//     }
//     return ans;
// }

// int searchLastOccur(int arr[], int size,int element)
// {
//     int start=0;
//     int end=size-1;
//     int mid=start  + (end-start)/2;
//     int ans=-1;

//     while (start<=end){

//     if(arr[mid]==element){

//         //FIRST OCCURENCE NIKALNE....
//         //yaha return hataune ani tala return ans garne return -1 ko satta.
//         ans = mid;
//         start=(mid+1);
        
//     }
//     else if(element>arr[mid]){
//         start=(mid+1);
//     }
//     else if (element<arr[mid]){
//         end=(mid-1);
//     }
//     mid=start  + (end-start)/2;
//     }
//     return ans;
// }
// int main()
// {
//     for 
//     (int i=0;i<2;i++){
//       int arr[7]= {1,3,6,6,6,6,7};
//       int n;
//       cin>>n;
    
//       int val1= searchFirstOccur(arr,7,n);
//       int val2=searchLastOccur(arr,7,n);


//       cout<<"First occurence is"<<val1;
//       cout<<"Last occurence is"<<val2;

//     // cout<<"Hello world"<<endl;
//     return 0;

//     }
// }


// 2. ..............PEAK ELEMENT IN MOUNTAIN ARRAY ...................

int searchPeak(int arr[],int size){
    int start=0,end=size-1,mid;
    mid = start + (end-start)/2;

    while (start<end){

    if (arr[mid]<arr[mid+1]){
        start= mid+1;
    }
    else {
        end = mid;
    }
    mid = start + (end-start)/2;
    }
    return arr[mid];
}


int main(){
    int arr[7]= {1,2,2,2,7,3,2};
//       int n;
//       cin>>n;
    cout<<"hello world";
      int val1= searchPeak(arr,7);
      cout<<"Mountain element is :"<<val1<<endl;
}




