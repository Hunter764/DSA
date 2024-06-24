#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    //pre compute
    int hash[256] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++; //index at which you have to do hash
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin>>c;
        //fetch 
        cout<< hash[c-'a'] <<endl;
    }
    return 0;
}