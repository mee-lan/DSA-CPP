#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size());
        stack<pair<int,int>> stk;
        //vector<pair<int,int>> v;
        stk.push({temperatures[0],0});
        //cout<<stk.top().first<<" "<<stk.top().second<<endl;
        for (int i=1;i<temperatures.size();i++){
            if(!stk.empty() && stk.top().first<temperatures[i]){
                while(!stk.empty() && stk.top().first<temperatures[i]){
                     ans[stk.top().second]= i-stk.top().second;
                     cout<<"popped"<<stk.top().first<<endl;  
                     stk.pop();
                }
                stk.push({temperatures[i],i});
                cout<<"pushed"<<temperatures[i]<<endl;
            }
            else{
                stk.push({temperatures[i],i});
            }
        }
        return ans;
    }
};

int main(){
    vector<int> temperatures = {30,40,50,60};
    Solution s;
    vector<int> ans = s.dailyTemperatures(temperatures);
    for (int e:ans){
        cout<<e<<endl;
    }
}