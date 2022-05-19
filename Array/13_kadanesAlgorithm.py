# ramnitcode27
# Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.
# Kadane's Algorithm

# Time complexity: O(N) 

class Solution:
    #Function to find the sum of contiguous subarray with maximum sum.
    def maxSubArraySum(self,arr,n):
        currSum,maxSum=0,-(1e9)
        for i in range(0,n):
            currSum+=arr[i]
            if currSum<0:
                currSum=0
            maxSum=max(currSum,maxSum)
        if maxSum==0:
            arr.sort()
            maxSum=arr[n-1]
        return maxSum

import math

def main():
        T=int(input())
        while(T>0):
            n=int(input())
            arr=[int(x) for x in input().strip().split()]
            ob=Solution()
            print(ob.maxSubArraySum(arr,n))
            T-=1


if __name__ == "__main__":
    main()