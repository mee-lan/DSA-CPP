#include <iostream>
using namespace std;

class Stack{
    private:
    char str[100];
    int topE=-1;

    public:
    void push(char c){
        str[++topE]=c;
    }
    void pop(){
        topE--;
    }
    char top(){
        return str[topE];
    }
    
};

void reverse(char* str){
Stack s;

int i=0;
while(str[i]!='\0'){
s.push(str[i]);
i++;
}

i=0;
while(str[i]!='\0'){
str[i]=s.top();
s.pop();
i++;
}

}

int main(){


char str[100];
cout<<"Enter a string";
gets(str);
cout<<"\n";
reverse(str);

int i=0;
while(str[i]!='\0'){
cout<<str[i];
i++;
}
// s.reverse(str);

}