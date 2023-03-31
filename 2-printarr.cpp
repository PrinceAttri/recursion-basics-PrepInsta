//printing array using recursion
#include <iostream>
using namespace std;

int printArr(int arr[], int len, int i) {
    if(i==len) {
        return 0;
    }
    
    cout << arr[i] << " ";
    
    printArr(arr, len, ++i);
    return 0;
}

int main()
{
    int arr[] = {1, 3, 8, 4, 6};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    int i;
    cout<<"Enter the index from where array should be printed: ";
    cin >> i;
    
    printArr(arr, len, i);
    
    //return 0;
}