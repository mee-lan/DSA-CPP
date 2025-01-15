#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) return false;

        unordered_map<char,int> m1,m2;
        for (int i=0;i<s.length();i++){
            m1[s[i]-'a']+=1;
        }for (int i=0;i<s.length();i++){
            m2[t[i]-'a']+=1;
        }

        if (m1==m2) return true;
        else return false;
    }
};


int main(){
    Solution s;
    cout<<s.isAnagram("catrat","ratct");
    //cout<<"hello";
    //cout<<s.hasDuplicateBruteforce(nums)<<endl;
    //cout<<s.hasDuplicate(nums);
    
}