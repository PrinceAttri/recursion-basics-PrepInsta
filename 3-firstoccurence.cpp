//first occurence in array using recursion
#include <iostream>
using namespace std;

int findVal(int arr[], int len, int val, int i) {
    if(arr[i]==val) {
        cout << i;
        return 0;
    }
    if(i==val) {
        cout << "Element does not exist.";
        return 0;
    }
    findVal(arr, len, val, ++i);
    return 0;
}

int main()
{
    int arr[] = {1, 3, 8, 4, 6, 8};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    int val;
    cout<<"Enter the value to be checked: ";
    cin >> val;
    
    findVal(arr, len, val, 0);
    
    return 0;
}