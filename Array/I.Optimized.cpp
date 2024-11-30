#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int min_left =arr[0]-0;
        int result ;

        for(int j=1; j<n; j++){
            int current_value = min_left + arr[j] +j;
            if(j== 1){
                result = current_value;
            }
            else{
                result = min(result,current_value);
            }
            min_left = min(min_left,arr[j]-j);
            
        }
        cout<<result<<endl;
    }
    return 0;
}

//Tc : O(n)