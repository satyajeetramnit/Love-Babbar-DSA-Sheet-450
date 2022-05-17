# ramnitcode27
# Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
# Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

class Solution:    
    # Time Complexity: O(m+n)
    # O(m+n) in case of Python because in python the set built-in method is quite different than that of C++ once, Python uses an hash map internally.
    def doUnion(self,a,n,b,m):
        # c=a+b
        # c=set(c)
        return len(set(a+b))
    
    # Time Complexity: O(nlogn)
    def intersection(a, b, n, m):
        i = 0
        j = 0
        # sort
        a.sort()
        b.sort()
        while (i < n and j < m):
            if (a[i] > b[j]):
                j += 1
                
            elif b[j] > a[i]:
                i += 1
            else:
                print(a[i], end=" ")
                i += 1
                j += 1

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        
        n,m=[int(x) for x in input().strip().split()]
        
        a=[int(x) for x in input().strip().split()]
        b=[int(x) for x in input().strip().split()]
        ob=Solution()
        
        print(ob.doUnion(a,n,b,m))