#include <iostream>
using namespace std;

//1.*******************************************
// .
// .
// .
// .
// .
// .
// .
//PIVOT= 7,8,9,1,2,3..........here 1 is pivot from graph..

int findPivot(int arr[],int size){
int start=0;
int end=size-1;
int mid;
mid = start+ (end-start)/2;
while (start<end){

if(arr[mid]>=arr[0]){
    start= start+1;
}
else {
    end = mid;
}
mid = start+ (end-start)/2;
}
return mid;
}




//2. ******************************************
// .
// .
// .
// .
// .
// .

//BINARY SEARCH.. index diyera..
int searchBinary(int start,int end,int arr[],int size, int element){
int mid;
mid = start+ (end-start)/2;
while (start<=end){
if (arr[mid]<element){
    start=mid+1;
}
else if (arr[mid]>element){
    end= mid-1;
}
else if (arr[mid]==element){
    return mid;
}
mid = start+ (end-start)/2;
}
return -1;
}

//FROM MAIN:
// if(n>= arr[pivot] && n<=arr[5]){
//     result=searchBinary(pivot,5,arr,6,n);
// }
// else{
//     result=searchBinary(0,pivot,arr,6,n);
// }



// 3. ******SQUARE ROOT USING BINARY SEARCH...
// .
// .
// .
// .
// .
// .
// .


long long int squareRoot(int num){
    int start=0;
    int end=num;
    long long int mid = start +(end -start)/2;
    int ans=-1;
    long long int sqr;
    while (start<=end){
    sqr=mid*mid;
    if (sqr > num){
        end= mid-1; 
    }
    else if (sqr< num){
        ans=mid;
        start = mid+1;
    }
    else if ( mid*mid == num){
        return mid;
    }
    mid = start +(end -start)/2;
    }
    return ans;
}

// ******4. SquareRooT WITH MORE PRECISION............
// .
// .
// .
// .
// .
double sqrtPrecision(int val,int precision,int n){
    
    double factor =1;
    double ans=val;
    for (int i=0;i<precision;i++){
        factor = factor/10;

        while ((ans+factor)*(ans+factor)<n){
        ans= ans+factor;
        cout << "ans:"<< ans<<endl;
        }
        cout<<"factor:"<<factor;
    }
    return ans;
}


int main(){
int n;
cin>>n;
int val = squareRoot(n);
double val1= sqrtPrecision(val,5,n);
cout<<"Result:"<<val1<<endl;
}

