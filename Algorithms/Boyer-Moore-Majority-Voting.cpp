#include<iostream>
using namespace std;

//function to find the majority element

int findMajority(int arr[],int n){

    int i , candidate = -1 , votes =0;

    for(i=0; i<n; i++){
        if(votes==0){
            candidate = arr[i];
            votes = 1;
        }
        else{
            if(arr[i] == candidate)
                votes++;
            else
                votes--;

        }
    }
    int count =0;
    //checking if majority elements is more than n/2 times

    for(i=0; i<n; i++){
        if(arr[i] == candidate){
            count++;
        }
    }
    if(count> n/2){
        return candidate;
    }
    return -1;

}




int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>> n;

    int arr[n];
    cout<<"The given array is: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int majority = findMajority(arr,n);
    cout<<"The majority elemnt is : "<< majority ;
    return 0; 

}