#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> map;
        for (int i=0;i<nums.size();i++){
            if (map.find(target-nums[i])!=map.end()) {
                ans.push_back(map[target-nums[i]]-1);
                ans.push_back(i);
                return ans;
            }
            else{
                map[nums[i]]=i+1;
            }
        }
        return ans;
    }
};


int main(){
    Solution s;
    vector<int> v = {5,5};
    for (int item: s.twoSum(v,10)){
        cout<<item<<endl;
    }
    
}