#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)

    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (i > 0 && (nums[i] == nums[i - 1]))
                continue;
            int front = i + 1;
            int back = nums.size() - 1;
            int sum = nums[front] + nums[back];

            while (front < back)
            {
                 
                
                if (sum == -nums[i])
                {
                    cout << "nums[i]=" << nums[i] << " " << front << " " << back << endl;
                    ans.emplace_back();
                    ans.back() = {nums[i], nums[front], nums[back]};

                    while (front < back && nums[front] == nums[front + 1])
                        front++;
                    while (front < back && nums[back] == nums[back - 1])
                        back--;

                    front++;
                    back--;
                }
                if (sum < -nums[i])
                { //
                    front++;
                }
                if (sum > -nums[i])
                {
                    back--;
                }
                sum = nums[front] + nums[back];
            }
           
           
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {-2, -1, 0, 0, 1, 1, 2};
    Solution s;

    // sort(nums.begin(), nums.end());
    // vector<vector<int>> ans;
    // for (int i = 0; i < nums.size() - 1; i++)
    // {

    //     if (i > 0 && (nums[i] == nums[i - 1]))
    //         continue;
    //     int front = i + 1;
    //     int back = nums.size() - 1;
    //     int sum = nums[front] + nums[back];

    //     while (front < back)
    //     {
    //         sum = nums[front] + nums[back];

    //         if (sum == -nums[i])
    //         {
    //             cout << "nums[i]=" << nums[i] << " " << front << " " << back << endl;
    //             ans.emplace_back();
    //             ans.back() = {nums[i], nums[front], nums[back]};

    //             while (front < back && nums[front] == nums[front + 1])
    //                 front++;
    //             while (front < back && nums[back] == nums[back - 1])
    //                 back--;

    //             front++;
    //             back--;
    //         }
    //         if (sum < -nums[i])
    //         { //
    //             front++;
    //         }
    //         if (sum > -nums[i])
    //         {
    //             back--;
    //         }
    //     }
    //     // return ans;
    // }
    for (vector<int> v : s.threeSum(nums))
    {
        for (int element : v)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}