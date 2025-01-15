#include <iostream>
#include <vector>
using namespace std;

void updateHash(vector<int> arr, vector<int> &hash){
    for (int i =0;i<arr.size();i++){
        hash[arr[i]]+=1;
    }

}

void updateHashStr(char* c, vector<int> &hash){
    for (int i =0 ;i<8;i++){
        hash[c[i]-'a'] +=1;
    }
}
int main(){
    vector<int> v (26,0);

    char c[10] = "abcdefg";
    updateHashStr(c,v);

    for (int item:v){
        cout<<item<<" "<<endl;
    }
}