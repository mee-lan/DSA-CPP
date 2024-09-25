#include<iostream>
#include<stack>
#include<queue>
#include<set>
using namespace std;
int main(){


    // *******************STACK****************
//     stack <string> str;
//     str.push("HEllO");
//     str.push("MY");
//     str.push("NAME");
//     str.push("MILAN");
//     // for (char i:str){
//     //     cout<<i<<endl;
//     // }
//     cout<<"Top element is:"<<str.top()<<endl;
//     str.pop();
//     cout<<"Top element is:"<<str.top()<<endl;
//     cout<<"SIZE IS:"<<str.size()<<endl;

// // Empty or not
// cout<<"Empty or not"<<str.empty();
//

//*
//*
//*
//*********************************QUEUE******************

// queue <string> q;
// q.push("!! ");
// q.push("HELLO  ");
// q.push("HELLO MY  ");
// q.push("HELLO MY NAME IS MILAN GYAWALI ");
// cout<<q.front()<<endl;
// q.pop();
// cout<<q.front()<<endl;

//*
//*
//*
//*******************SET***********

set<int> s;
s.insert(1);
s.insert(2);
s.insert(1);
s.insert(4);
s.insert(4);
s.insert(4);
s.insert(0);

for(auto i : s)
{
    cout<<i<<endl;
    
}
cout<<"Size of set is : " << s.size()<<endl;

s.erase(s.begin()+1);
for(auto i : s)
{
    cout<<i<<endl;
    
}

cout<<"Size of set is : " << s.size()<<endl;
 }
