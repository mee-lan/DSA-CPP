#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int front =0;
        int back = numbers.size()-1;

        while(front<back){
            if (numbers[front]+numbers[back]==target){
                return {front+1,back+1};
            }
            if(numbers[front]+numbers[back]<target){
                front++;
            }
            else if(numbers[front]+numbers[back]>target){
                back--;
            }
        }
        return {};
    }
};

int main(){
    vector<int> v = {1,2,3,4,10};
    Solution s;
    for(int i: s.twoSum(v,14)){
        cout<<i<<endl;
    }
}