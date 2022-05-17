// ramnitcode27
// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.
// Kadane's Algorithm

// # Time complexity: O(N) 

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long currentSum=0;
        long long maxSum=INT_MIN;
        for(int i=0;i<n;i++){
	        currentSum+=arr[i];
	        if(currentSum<0){
		        currentSum=0;
	        }
	        maxSum=max(currentSum,maxSum);
        }
        if(maxSum==0){
		    sort(arr,arr+n);
		    maxSum=arr[n-1];
	    }
        return maxSum;
    }
};

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        Solution ob;
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}