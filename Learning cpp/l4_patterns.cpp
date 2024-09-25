#include <iostream>
using namespace std;
int main()
{

    //********Pattern 1:*********
    // int i,j;
    // for(i=1;i<=4;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<"\n";
    // }

    // Pattern 2: <<<nicc>>>>>
    //     int i,j,n=1,m;
    //  for(i=1;i<=4;i++){
    //      m=i;
    //      for(j=1;j<=i;j++){
    //          cout<<m<<" ";
    //          m++;
    //      }
    //      cout<<"\n";
    //  }

    // PATTERN 3 (ALTERNATIVE WAY):

    // int i,j,n=1,m;
    // for(i=1;i<=4;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<i-j+1<<" ";
    //     }
    //     cout<<"\n";
    // }

    // Pattern 4:

    // int n,i,j;
    // char ch='A';
    // cin>>n;
    // for(i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         cout<< char(i+j+'A') <<" ";
    //     }
    //     cout<<"\n";
    // }

    // Pattern 5:

    //     int n,i,j;
    // char ch='A';
    // cin>>n;
    // for(i=0;i<n;i++){
    //     for(j=0;j<i+1;j++){
    //         cout<< char(i+j+'A') <<" ";
    //     }
    //     cout<<"\n";
    // }

    // int n, i, j;

    // cin >> n;
    // for (i = 0; i < n; i++)
    // {
    //     char ch = 'A'+n-1-i;
    //     for (j = 0; j < i + 1; j++)
    //     {
    //         cout << char(ch) << " ";
    //         ch++;
    //     }
    //     cout << "\n";
    // }



//***********PATTERN 6*************
    // int n, i, j;

    // cin >> n;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n - i - 1; j++)
    //         cout << " ";
    //     for(j=0;j<=i;j++)
    //     cout<<"*";
    //     cout << "\n";
    // }



//**********PATTERN 7**************
    //     int n, i, j;

    // cin >> n;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n - i; j++){
    //         cout << "*"<<"\t";
    //     }
    //     cout << "\n";
    // }





    //******PATTERN 8********
    //     int n, i, j;

    // cin >> n;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < i; j++)
    //      cout << " ";
    //     for(j=0;j<=n-i-1;j++)
    //     cout<<"*";
    //     cout << "\n";
    // }



    //  int n, i, j;
    // cin >> n;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j <n-i-1; j++)
    //      cout <<" ";
    //     for(j=0;j<=i;j++)
    //     cout<<i+j+1;
    //     cout << "\n";
    // }



    //*******PATTERN 10******

    //  int n, i, j;
    //  cin >> n;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j <n-i-1; j++)
    //      cout <<" ";
    //     for(j=0;j<(2*i+1)/2;j++)
    //     cout<<j+1;
    //     for(j=i+1;j>=1;j--)
    //     cout <<j;
    //     cout << "\n";
    // }


    //DABANG PATTERN*****

         int n, i, j;
     cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <n-i; j++)
        cout <<j+1;
        for(j=0;j<2*i;j++)
        cout<<"*";
        for (j = n-i; j >=1; j--)
        cout <<j;
        cout << "\n"; 
    }  
    getchar();    
}
