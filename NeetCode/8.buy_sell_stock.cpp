#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int front = 0;
        int back = front + 1;
        int diff = 0;

        while (front < back && back < prices.size())
        {
            if (prices[back] < prices[front])
            {
                front = back;
                back++;
            }
            else
            {
                diff = max(diff, prices[back] - prices[front]);
                back++;
            }
        }
        return diff;
    }
};

int main()
{
    Solution s;
    vector<int> prices = {10, 9, 8,100, 7, 6};
    // 10,1,5,6,7,1
    cout<<s.maxProfit(prices);
}