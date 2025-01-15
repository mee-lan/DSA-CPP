#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
        vector<vector<string>> isAnagram(vector<string> strs) {

        vector<vector<string>> ans;

        vector<bool> marked(strs.size(),false);
        vector <unordered_map<char,int>> map(strs.size());
        for (int i = 0; i < strs.size(); i++) {
            for (int j = 0; j < strs[i].length(); j++) {
                map[i][strs[i][j]] += 1;
            }
        }
          for (int i=0;i<map.size();i++){
            if(!marked[i]) {
                ans.emplace_back();
                ans.back().emplace_back(strs[i]);

                for (int j=0;j<map.size();j++){
                    if(i==j) continue;
                    if(map[i]==map[j]){
                        marked[j]=true;
                        ans.back().emplace_back(strs[j]);
                    }
                }
            }
        }
        // for (auto it=map[0].begin(); it!=map[0].end(); it++) {
        //         cout<<it->first<<" "<<it->second<<endl;
        //     }
        return ans;
    }
};


int main(){
    Solution s;
    vector<string> v = {"act","pots","tops","cat","stop","hat"};
    vector<vector<string>> strings = s.isAnagram(v);
    cout<<strings.size()<<endl;
    cout<<"[";
    for (int i=0;i<strings.size();i++){
        cout<<"[";
        for (int j=0;j<strings[i].size();j++){
                cout<<strings[i][j];
                if (j!=strings[i].size()-1) cout<<",";
        }
        cout<<"]";
    }
    cout<<"]"<<endl;
    //cout<<"hello";
    //cout<<s.hasDuplicateBruteforce(nums)<<endl;
    //cout<<s.hasDuplicate(nums);
    
}