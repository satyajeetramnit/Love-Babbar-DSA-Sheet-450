# ramnitcode27
# Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
# Find out the minimum possible difference of the height of shortest and longest towers after you have modified each tower.

class Solution:
    def getMinDiff(self, arr, n, k):
        arr.sort()
        diff,least,most=arr[n-1]-arr[0],arr[0]+k,arr[n-1]-k
        for i in range(0,n-1):
            mini=min(arr[i+1]-k,least)
            maxi=max(arr[i]+k,most)
            if mini<0:
                continue
            else:
                diff=min(diff,maxi-mini)
        return diff
        
if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        k = int(input())
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.getMinDiff(arr, n, k)
        print(ans)
        tc -= 1
