# ramnitcode27
# Cyclically rotate an array by one
# Given an array, rotate the array by one position in clock-wise direction.

# Time Complexity: O(n)
# Space Complexity: O(1)


def rotate( arr, n):
    for i in range(0,n):
        arr[i],arr[n-1]=arr[n-1],arr[i]
    
def main():
    T = int(input())
    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        rotate(a, n)
        print(*a)
        T -= 1

if __name__ == "__main__":
    main()