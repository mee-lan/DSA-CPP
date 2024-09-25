#include <iostream>
#include <array>
#include <vector>
#include <deque>
using namespace std;
int main()
{

    //********************ARRAY FUNCTIONS****************************

    // array<int, 5> arr = {1, 3, 5, 6, 7};

    // // 1. Array size
    // int a = arr.size();
    // cout << a << endl;

    // // 2.Getting Array elements
    // cout << "THE first element in array is: " << arr.at(0) << endl;

    // // getting first and last element in array
    // cout << "FIRST ELEMENT IN ARRAY IS: " << arr.front() << endl;
    // cout << arr.back() << endl;

    // // 3. Finding if array is empty or not (RETURNS BOOLEAN)
    // cout << arr.empty();

    //     //*
    //     //*
    //     //*
    //     //*
    //     //************************VECTOR*****************************

    //     // INITIALIZING VECTORS:
    //     vector<int> name = {1, 2, 3, 4, 5, 8};

    //     // Creates vector of size 3 and initializes all elements by 1
    //     vector<int> v(3, 1);

    //     // Creates a vector naya and copies all elements of name..
    //     vector<int> naya(name);

    //     cout << v.at(0) << endl;

    //     // ADDING ELEMENTS IN VECTOR
    //     name.push_back(6);
    //     cout << name[3];

    //     // DELETING ELEMENT:

    //     // deletes last element
    //     name.pop_back();
    //     // clear the whole vector
    //     name.clear();

    //     // PRINTING elements
    //     for (int i : naya)
    //     {
    //         cout << i << endl;
    //     }
    //     // Capacity and size:
    //     //  Capacity = total possible elements in vector : Size= current number of elements

    //     cout << name.capacity() << endl;
    //     cout << name.size() << endl;
    // }

    //*
    //*
    //*
    //*
    //************************DEQUE (DOUBLLY ENDED QUEUE)*****************************

    deque<int> d={3,4,5,6,6};
    d.push_back(1);
    d.push_front(2);

    //DELETING ELEMNTS:
    d.pop_back();

    d.erase(d.begin(),d.begin()+1);



    for (int i:d){
        cout<<i<<endl;
    }

}
