// ramnitcode27
// Move all negative numbers to beginning and positive to end with constant extra space

// Time complexity: O(N) 
// Auxiliary Space: O(1)

#include<bits/stdc++.h>
using namespace std;

void sortNegativeElements(int arr[], int n){
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortNegativeElements(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}