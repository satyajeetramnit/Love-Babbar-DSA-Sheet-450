# ramnitcode27
# Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Fidx the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

class Solution:
    def minJumps(self, arr, n):
        count,idx,curr=0,0,arr[0]
        while idx<n-1:
            if curr==0:
                return -1
            maxIdx=idx+1
            progress=arr[idx+1]
            for i in range(idx+1,idx+curr+1):
                if i>n-1:
                    break
                if i==n-1:
                    return count+1
                progress=max(progress,arr[i]+i)
                if progress==arr[i]+i:
                    maxIdx=i
            count+=1
            idx=maxIdx
            curr=arr[idx]
        return count

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        n = int(input())
        Arr = [int(x) for x in input().split()]
        ob = Solution()
        ans = ob.minJumps(Arr,n)
        print(ans)