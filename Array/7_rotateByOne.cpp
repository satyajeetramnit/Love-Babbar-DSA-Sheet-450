// ramnitcode27
// Cyclically rotate an array by one
// Given an array, rotate the array by one position in clock-wise direction.

// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=temp;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        rotate(a, n);
        for (i = 0; i < n; i++)
            cout<<a[i]<<" ";
        printf("\n");
    }
    return 0;
}