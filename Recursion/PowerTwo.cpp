//This version is in built power function

#include<iostream>
using namespace std;

int pow(int a, int n){
    if(n == 0) return 1;
    int p = pow(a,n/2);
    if(n%2==0){
        return p*p;
    }
    else{
        return p*p*a;
    }
}

int main(){
    int a, n;
    cin>>a>>n;
    int ans = pow(a,n);
    cout<<ans<<endl;
    return 0;
}
