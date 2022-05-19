# ramnitcode27
# Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.

class Solution:
    def merge(self, arr1, arr2, n, m): 
        i,j=n-1,0
        while i>=0 and j<m:
            if arr1[i]>arr2[j]:
                arr1[i],arr2[j]=arr2[j],arr1[i]
                i-=1
                j+=1
            else:
                break
        arr1.sort()
        arr2.sort()

if __name__ == "__main__":         
    tc=int(input())
    while tc > 0:
        n, m=map(int, (input().strip().split()))
        arr1=list(map(int , input().strip().split()))
        arr2=list(map(int , input().strip().split()))
        ob = Solution()
        ans=ob.merge(arr1, arr2, n, m)
        for x in arr1:
            print(x, end=" ")
        for x in arr2:
            print(x, end=" ")
        print()
        tc=tc-1