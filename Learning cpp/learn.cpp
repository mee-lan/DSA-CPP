#include<iostream>
using namespace std;
int main(){

    int a='r';
    cout <<a<<endl;
 
 // char ko value ma integer literal rakhda teskai ascii value anusar print gardinxa...
 //in this case 98 = b so b gets printed
    char ch=98;
    cout <<ch<<endl;

    //here the last 8 bits (char =1byte) is taken and printed its corresponding value
    ch=12345123999;
    cout <<ch <<endl;
}