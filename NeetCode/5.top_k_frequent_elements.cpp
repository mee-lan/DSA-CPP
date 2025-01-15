#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int,int> map;
        vector<int>ans;
        for (int i=0;i<nums.size();i++){
           map[nums[i]]+=1 ;
        }
        vector<vector<int>> bucket(nums.size()+1);
            for (auto item: map){
                bucket[item.second].push_back(item.first);
            }
         for (int i=bucket.size()-1;i>=0;i--){
            for (auto item: bucket[i]){
                 ans.push_back(item);
                 if (ans.size()==k) return ans;
            }
            
        }
        return ans;
    }
    
};
int main(){
    Solution s;
    vector<int> v = {4,1,1,1,2,2};
    for (int item: s.topKFrequent(v,2)){
        cout<<item<<" ";
    }
}