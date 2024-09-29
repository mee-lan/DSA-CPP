#include <iostream>
#include <stack>
using namespace std;

bool checkParenthesis(char* str){
    stack<char> s;
    int i=0;
    while(str[i]!='\0'){

    if (str[i]=='('||str[i]=='{'||str[i]=='['){
    s.push(str[i]);
    i++;
    }
    else if(str[i]==')'||str[i]=='}'||str[i]==']')
    {
       if (s.empty()) return false; //THIS IS IMPORTANT!
       if((s.top()=='(' && str[i]==')')
       ||(s.top()=='{'&& str[i]=='}')
       ||(s.top()=='['&& str[i]==']')
       )
       s.pop();
       i++;
    }
    else{
        return false;
    }
    }
   //cout<<"Stack="<<s.top(); //THIS LINE MESSED UP THE WHOLE THING!! DONT ACCESS TOP without checking empty

    if (s.empty()) return true;
    else return false;
}




int main()
{
    char str[10];
    cout<<"Enter your parenthesis list\n";
    gets(str);
    if(checkParenthesis(str)) cout<<"\nBALANCED";
    else cout<<"\nERROR!!";

}