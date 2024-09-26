#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> v, int m)
{

    int start = m;
    int end = v.size() - 1;

    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

void printVector(vector<int> v)
{
    for (int i : v)
    {
        cout << i << "";
    }
}

void mergeArray(int v1[], int m, int v2[], int n,int v3[])
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {

        if (v1[i] < v2[j])
        {
            v3[k] = v1[i];
            i++;
            k++;
            cout<<"In first loop"<<endl;
        }

        else {

            v3[k]=v2[j];
            j++;
            k++;
            cout<<"In second loop"<<endl;
        }
    }
    while (i<m){
        v3[k] = v1[i];
            i++;
            k++;
    }
    while (j<n){
        v3[k] = v2[j];
            j++;
            k++;
    }
    
}

int main()

{ 
    int v1[5] = {1, 3, 5, 9, 99};
    int v2[3] = {2, 4, 8};
    int v3[8]={0};
    mergeArray(v1,5,v2,3,v3);

    cout<<"Hello world";

    for(int i : v3)
    {
        cout<<i<<" ";
        
    }

    // v = reverseArray(v, 2);
    // printVector(v);
}