# ramnitcode27
# Write a program to reverse an array or string

#  Time Complexity : O(n)
#  Auxiliary Space : O(1)

def reverseString(string):
    return string[::-1]

def reverseArray(array):
    return array[::-1]

str=input("Enter a string: ")
str=reverseString(str)
print(str)
arr=input("Enter an array: ")
arr=reverseArray(arr)
print(arr)