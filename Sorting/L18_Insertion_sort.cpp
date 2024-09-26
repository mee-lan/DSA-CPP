#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    int j,temp=0;
    for (int i = 0; i < size - 1; i++)
    {
        temp=arr[i+1];
        
        for (j = i; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                // arr[j]=temp;
                }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int arr[10] = {8, 7, 3, 1, 6,99,35,11,2,6};
    insertionSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
}