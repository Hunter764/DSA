#include<iostream>
using namespace std;

void DecIN(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    DecIN(n-1);
    cout<<n<<" ";
}

int main(){
    DecIN(5);
    return 0;
}

//5 4 3 2 1 1 2 3 4 5