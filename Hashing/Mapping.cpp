//map stores all the values in sorted order
//map in numeric hashing

#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;i++){
        cin >>arr[i];
    }

    //pre compute
    map<int , int> mpp;     //<int , int> are <key, value> int value we are storing frequencies
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    

    //iterate in the map
    for(auto it: mpp){
        cout << it.first << "->" <<it.second <<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}

//Time complexity O((n+q)logn)

//Output
// 7
// 1 2 3 1 3 2 12
// 1->2
// 2->2
// 3->2
// 12->1
// 5
// 1
// 2
// 2
// 2
// 3
// 2

//unorder_map stores all the values in no-sorted order

//Time complexity map: storing and fetching 0(logN) :- best,worst,average where N is number of elements in the map DS

//Unordered_map :O(1) :- average ,best
                //O(N) : - worst case (rarely happens) when collisions happens