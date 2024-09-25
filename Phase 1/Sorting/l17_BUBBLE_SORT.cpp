#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size){

bool swapped=false;
for (int j=0;j<size-1;j++)
{
    for (int i=0;i<size-j-1;i++){
        if (arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        swapped=true;
        }
        // cout<<arr[i]<<endl;
    }

    //****OPTIMIZED CODE***********
// IF no swaps i.e in a,b,c,d,e
// a<b , b<c , c<d, d<e
// THEN NO FURTHER PROCESS IS NEEDED THE ARRAY IS SORTED NOW


// SO BEST CASE COMPLEXITY BECOMES O(n)

    if (swapped==false)
    break;
}
    }




int main(){
int arr[5]={9,4,5,5,6};
bubbleSort(arr,5);
for (int i=0;i<5;i++){
    cout<<arr[i]<<endl;
}
}