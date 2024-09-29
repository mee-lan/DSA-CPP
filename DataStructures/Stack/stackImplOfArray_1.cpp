#include <iostream>
using namespace std;

//GLOBALS
#define MAX_SIZE 50

class stack{
private:
    int top=-1;
    int arr[MAX_SIZE];
    
public:

void push(int x){
    arr[++top]=x;
}
int pop(){
    top--;
}

bool isEmpty(){
    if (top==-1) return true;
    else return false;
}

int topElement(){
    return arr[top];
}
};
int main(){
    stack s;
    s.push(1);
    cout<<"Top:" <<s.topElement();
    s.push(2);
     cout<<"Top:"<<s.topElement();
    s.push(3);
     cout<<"Top:"<<s.topElement();
    s.push(4);
    s.pop();
    cout<<"Top:"<<s.topElement();

    cout<<"STACK IS:"<<s.isEmpty();
     //cout<<"Top:"<<s.topElement();
}