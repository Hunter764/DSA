//Calculating the frequencies of number in the given array
//We can do it max 1e7 
//taking input array and then running queries on the elements

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
 
    //int hash[1e6]   when defined locally it cannot exceed limit 1e6 but when defined globally it can take up to 1e7
    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << hash[number] <<endl;
    }
    return 0;

}


// Reading n: O(1)
// Intialising and filling the array: O(n)
// Intialising the hash array: O(n)
// Filling the hash array: O(n)
// handling Queries: O(1)

//overall time complexity O(n+q)