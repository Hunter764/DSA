#include<iostream>
using namespace std;



//In O(n^2) time complexity

// void bubble_sort(int arr[] , int n){
//     for(int i=n-1 ;i>=0; i--){
//         for(int j=0; j<=i-1; j++){   //important j<=i-1
//             if(arr[j]>arr[j+1]){ 
//             int temp = arr[j+1];
//             arr[j+1] = arr[j];
//             arr[j] = temp;
//             }
//         }
//     }
// }

//In O(n) time complexity

//Also Fufilling the condtion if array is already sorted

void bubble_sort(int arr[] ,int n ){
    for(int i=n-1; i>=0; i++){
        int didSwap=0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] =arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
        cout<<"run\n";
    }
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1 ;i++){
        cin>> arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
