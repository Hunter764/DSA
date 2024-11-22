#include<iostream>
using namespace std;

int Fib(int n){
    if(n <= 1){
        return n;
    }
    return Fib(n-1) + Fib(n-2);
}

int main(){
    int a =Fib(10);
    cout<<"The 10th Fibonacci number is :"<<a<<endl;
    return 0;
}
// The 10th Fibonacci number is :55