//printing reversed array using recursion
#include <iostream>
using namespace std;

int printArr(int arr[], int len, int i) {
    if(i==len) {
        return 0;
    }
    printArr(arr, len, ++i);
    i--;
    cout << arr[i] << " ";
    return 0;
}

int main() {
    int arr[] = {3, 5, 7, 2, 4};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    int i;
    cout<<"Enter the index: ";
    cin >> i;
    
    printArr(arr, len, i);
    
    return 0;
}