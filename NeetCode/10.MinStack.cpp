#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class MinStack {

private:
    vector<int> stk;
    int _top;
    stack<int> mininum;
public:
    MinStack() {
        stk.resize(100);
       _top = -1;
       mininum.push(__INT_MAX__);
    }
    
    void push(int val) {
        //if (top==-1)
        stk[++_top]=val;
        if(val<=mininum.top()) mininum.push(val);
    }
    
    void pop() {
        if(mininum.top()==top()) mininum.pop();
        _top--;
    }
    
    int top() {
         return stk[_top];
    }
    
    int getMin() {
        return mininum.top();
    }
};
int main(){
    MinStack minStack;
    minStack.push(-2);
    minStack.push(-2);
    minStack.push(-3);
    minStack.push(-3);
    cout<<minStack.getMin(); // return 0
    minStack.pop();
    cout<<minStack.top();    // return 2
    cout<<minStack.getMin(); // return 1

}