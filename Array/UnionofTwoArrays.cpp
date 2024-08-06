//Union of Two Sorted Arrays
//brute force


//As we are using only a single map the common element in arr1 and arr2 are treated as a single element for finding frequency, so there would be no duplicates.
//In unordered_map the keys are stored in random order, while in the map the keys are stored in sorted order (ascending order by default).
#include<iostream>
#include<map>
using namespace std;

vector <int> FindUnion(int arr1[], int arr2[] , int n, int m){
    map <int, int> freq;
    vector <int> Union;
    for(int i=0; i<n; i++){
        freq[arr1[i]++];
    }
    for(int i=0; i <m; i++){
        freq[arr2[i]]++;
    }
    for(auto & it: freq)
        Union.push_back(it.first);
    return Union;    
}

int main(){
    int n;
    cout<<"Enter the size of arr1:";
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the size of arr2:";
    cin>>m;
    int arr2[m];
    for(int j=0; j<m; j++){
        cin>>arr2[j];
    }
    vector <int> Union = FindUnion(arr1 , arr2 , n ,m);
    cout<<"Union of arr1 & arr2"<<endl;
    for(auto & val:Union)
        cout<< val <<" ";
    return 0;
}

//Output:-
// Enter the size of arr1:5
// 1 2 3 4 5
// Enter the size of arr2:4
// 2 3 4 6
// Union of arr1 & arr2
// 1 2 3 4 5 6 % 



