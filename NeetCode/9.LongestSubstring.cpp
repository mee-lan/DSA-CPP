#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, pair<int, int>> m;
        int f = 0;
        int b = f;
        int count=0;
        int maxCount =0;

        while (b < s.size())
        {
            if (m[s[b]].second == 0)
            {
                
                m[s[b]] = {b, 1};

            }

            else // Found element in map
            {
                if (m[s[b]].first >= f) {
                f = m[s[b]].first + 1; // Move f directly to the position after the last occurrence of s[b]
                //count = b - f + 1;     // Recalculate count for the new window
                }
            }
            m[s[b]].first = b; // Update the last occurrence of the character

            maxCount = max(maxCount,b - f + 1);
            b++;
        }
        return maxCount;
    }
};
int main()
{
    string s = "thequickbrownfoxjumpsoverthelazydogthequickbrownfoxjumpsovert";
    Solution sol;
    cout<<sol.lengthOfLongestSubstring(s);

    // unordered_map<char, pair<int, int>> m;
    // int f = 0;
    // int b = f;
    // int count=0;
    // int maxCount =0;

    // while (b < s.size())
    // {
    //     if (count ==100){
    //         cout<<"error"<<endl;
    //         break;
    //     }
    //     if (m[s[b]].second == 0)
    //     {
            
    //         m[s[b]].first = b;
    //         m[s[b]].second += 1;
    //         count++;
    //         cout<<"FROM IF:"<<"First:"<<m[s[b]].first<<"Second"<<m[s[b]].second<<endl;
    //     }

    //     else //Found element in map
    //     {
    //         while (f != (m[s[b]].first + 1) )
    //         {
    //             m[s[f]].second = 0;
    //             f++;
    //             count--;
    //         }
    //         cout<<"First:"<<m[s[b]].first<<"Second"<<m[s[b]].second<<endl;
    //         //count=0;
    //     }
    //     maxCount = max(maxCount,count);
    //     b++;

    // }
    // cout<<maxCount;
}