// ramnitcode27
// Write a program to reverse an array or string

// Time Complexity : O(n)
// Auxiliary Space : O(1)

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverseString(string &str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void reverseArray(int *arr)
{
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len / 2; i++){
        int temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}

int main(){
    string str = "Satyajeet Ramnit";
    reverseString(str);
    cout << str << endl;

    int arr[] = {1, 2, 3, 4, 5};
    reverseArray(arr);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}