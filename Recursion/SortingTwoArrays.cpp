#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the size of the array a: ";
    cin >> n;
    cout << "Enter the size of the array b: ";
    cin >> m;

    int a[n], b[m];
    cout << "Enter elements of array a (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter elements of array b (sorted): ";
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }
    int c[n+m]; 
    int p1=0,p2=0,p3=0;
    while(p1<n && p2<m){
         if(a[p1]<b[p2]){
        c[p3]=a[p1];p3++;p1++;
        }
        else{
        c[p3]=b[p2];p3++; p2++;
        }
    }
    while(p1<n){
        c[p3++]=a[p1++];    
    }
    while(p2<m){
        c[p3++] = b[p2++];
    }
    cout << "Merged array: ";
    for (int i = 0; i < p3; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
   
   return 0;
   
}


// Enter the size of the array a: 4
// Enter the size of the array b: 3
// Enter elements of array a (sorted): 7 10 11 14
// Enter elements of array b (sorted): 3 7 8 9
// Merged array: 3 7 7 8 10 11 14 