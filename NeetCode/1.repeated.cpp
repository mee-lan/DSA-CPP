// Contains Duplicate
// Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

// Example 1:

// Input: nums = [1, 2, 3, 3]

// Output: true

// Example 2:

// Input: nums = [1, 2, 3, 4]

// Output: false

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool hasDuplicateBruteforce(vector<int>& nums) {
        int i=0,j=0;
        for (i=0;i<nums.size();i++){
            for (j = 0; j<nums.size() ;j++){
                if (nums[i] == nums[j] && (i!=j)){
                    cout<<"i="<<i<<"j="<<j<<endl;
                    return true;
                }
            }
        }
        return false;
    }

    bool hasDuplicateSorting(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]) return true;
        }
        return false;
    }

    bool hasDuplicate(vector<int>&nums){
        unordered_map<int,int> m;
        for (int i=0;i<nums.size();i++){
            if (m[nums[i]]==1){
                return true;
            }
            m[nums[i]]++;
        }
        return false;
    }
};


int main(){
    Solution s;
    vector<int> nums = {0,1,2,4,3,0};
    //cout<<"hello";
    //cout<<s.hasDuplicateBruteforce(nums)<<endl;
    cout<<s.hasDuplicate(nums);
    
}