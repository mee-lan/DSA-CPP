#include <iostream>
using namespace std;

class list{
    public:

    int ptr=-1;
    int size;
    int *arr = new int[size];
    list(int n):size(n){}


    void insert(int n){
        arr[++ptr]= n;
    }

    int display (){
        cout<< "Top element is: "<<endl<<arr[ptr];
    }

    void remove(int n){
        for( int i=n;i<ptr+1;i++){
            arr[n]= arr[n+1];
            cout<<"Done"<<endl;
        }
        ptr-=1;
    }

    int returnSize(){
        return ptr+1;
    }


};

int main(){
    list l(5);
    l.insert(55);
    l.insert(5);
    l.insert(9);
    l.insert(8);
    l.insert(7);
    l.display();
    cout<<endl<<l.returnSize();

    l.remove(2);
    l.display();
    cout<<endl<<l.returnSize();
}