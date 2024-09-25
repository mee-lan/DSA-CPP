#include <iostream>
using namespace std;
int main()
{

    int n, ans = 0, rem,flag=0, sum = 0, bit = 0, x, a = 1;
    cin >> n;
    x = n;
    while (x != 0 )
    {
        if (sum>INT32_MAX/10 || sum<INT32_MIN/10){
            flag=1;
            break;
        }
        rem = x%10;
        sum = sum*10 + rem;
        x=x/10;
    }
    if (flag==1){
        cout<<0;
    }
    else{
    cout<<sum;
    }

    //     ans = (~sum);
    //     ans=ans+1;
    //     cout<<ans;

    // }

    // cout <<sum;
}