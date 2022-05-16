# ramnitcode27
# Maximum and minimum of an array using minimum number of comparisons

# O(n)
def getMinMax( a, n):
    return min(a),max(a)

def main():
    T = int(input())
    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        
        product = getMinMax(a, n)
        print(product[0], end=" ")
        print(product[1])

        T -= 1

if __name__ == "__main__":
    main()