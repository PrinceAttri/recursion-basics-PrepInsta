//last occurence in array using recursion
#include <iostream>
using namespace std;

int findVal(int arr[], int len, int val, int i) {
    if(i==len) {
        return -1;
    }
    
    int index = findVal(arr, len, val, ++i);
    
    if(index==-1 && arr[i]==val) {
        return i;
    }
    else {
        return index;
    }
}

int main() {
    int arr[] = {1, 2, 4, 2, 6, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    int val;
    cout << "Enter the value to be checked: ";
    cin >> val;
    
    int i = 0;
    cout << findVal(arr, len, val, i);
}