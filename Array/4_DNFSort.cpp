// ramnitcode27
// Sort an array of 0s, 1s and 2s
// Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    void swap(int arr[],int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
    void sort012(int a[], int n)
    {
        int mid=0;
        int low=0;
        int high=n-1;
        while(mid<=high){
            if(a[mid]==0){
                swap(a,low,mid);
                low++;
                mid++;
            }

            else if(a[mid]==1){
                mid++;
            }

            else{
                swap(a,mid,high);
                high--;
            }
        }  
    }
    
};

int main() {
    
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}