// ramnitcode27
// Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Fidx the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        int count=0, idx=0, curr=arr[0];
        while(idx < n-1){
            if(curr==0) 
                return -1;
            int maxidx = idx+1;
            int progress = arr[idx+1];
            for(int i = idx+1; i<=idx+curr && i<=n-1; i++){
                if(i == n-1)
                    return count+1;
                progress = max(progress, arr[i]+i);
                if(progress == arr[i]+i)
                    maxidx=i;
            }
            count++;
            idx = maxidx;
            curr = arr[idx];
        }
        return count;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}