//checking palindrome string using recursion
#include <iostream>
#include <cstring>
using namespace std;

bool isPalCheck(char str[],int x,int y) {
    if(x==y) {
        return true;
    }
    if(str[x]!=str[y]) {
        return false;
    }
    if(x<=y) {
        isPalCheck(str, ++x, --y);
    }
    return true;
}
bool isPalindrome(char str[]) {
    int len = strlen(str);
    if(len==0) {
        return true;
    }
    return (isPalCheck(str, 0, len-1));
}
int main() {
    char str[] = "poop";
    if(isPalindrome(str)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}