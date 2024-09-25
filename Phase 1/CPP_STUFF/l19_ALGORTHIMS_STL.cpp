#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(11);

    cout<<binary_search(v.begin(),v.end(),7)<<endl;

    string name= "MY name is milan gyawali";
    // reverse(name.begin(),name.end());

    rotate(name.begin(),name.begin()+9 ,name.end());
    cout<<name<<endl;

}   