#include<iostream>
using namespace std;

int pow(int a, int n){
    if(n == 0) return 1;
    return a * pow(a, n-1);
}

int main(){
    int a, n;
    cin>>a>>n;
    int ans = pow(a,n);
    cout<<ans<<endl;
    return 0;
}