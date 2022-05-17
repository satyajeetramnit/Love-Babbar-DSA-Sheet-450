# ramnitcode27
# Move all negative numbers to beginning and positive to end with constant extra space

# Time complexity: O(N) 
# Auxiliary Space: O(1)

def sortNegativeElements(arr):
    i = 0
    j = len(arr) - 1
    while i < j:
        if arr[i] < 0 and arr[j] >= 0:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
            j -= 1
        elif arr[i] >= 0:
            i += 1
        else:
            j -= 1
    return arr

n=int(input())
arr=list(map(int,input().split()))
print(*sortNegativeElements(arr))