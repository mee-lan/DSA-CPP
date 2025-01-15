#include <iostream>
using namespace std;


void towerOfHanoi(int n,char src = 'A',char aux='B',char dest = 'C'){
    if (n>=1){
    towerOfHanoi(n-1,src,dest,aux);
    cout<<"Moving block" <<n<<"From"<<src<<"To:"<<dest<<endl;
    towerOfHanoi(n-1,aux,src,dest);
    }
}

int main(){
    towerOfHanoi(3);
}
