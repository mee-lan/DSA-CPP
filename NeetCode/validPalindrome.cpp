#include<iostream>
#include<cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int back = s.length()-1;
        int front = 0;

        string str;
        for (char c:s){
            str+=char(tolower(c));
        }
        s=str;

        while(back>front){
            if (!(isalnum(s[front]))){
                front++;
                continue;
            }
            if (!(isalnum(s[back]))){
                back--;
                continue;
            }
            if(s[front]!=s[back]) return false;
            front++;
            back--;
        }
        return true;
    }
};

int main(){
    Solution sol;
    string s = "0ABa0????";
    cout<<sol.isPalindrome(s);
    //cout<<s;
}
