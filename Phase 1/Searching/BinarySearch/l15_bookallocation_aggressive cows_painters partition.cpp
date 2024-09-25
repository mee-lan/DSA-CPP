#include <iostream>
using namespace std;


int allocateBooks (int arr[], int student, int page,int size){
int start=0;
int sum=0;

for (int i=0;i<size;i++){
    sum=sum+arr[i];
}
int end=sum;
int mid = start + (end-start)/2;

int pageSum=0;
while  (start<=end){

for (int i=0;pageSum+arr[i]<mid;i++){
pageSum = arr[i]+sum;
}


}





}

int main(){
    
}