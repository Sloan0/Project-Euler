#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int number);

int main(){
    int product;
    int largestPalindrome;
    for(int i = 100; i <= 999; i++){
        for (int j = i; j <= 999; j++){
            product = i * j;
            if (product > largestPalindrome){
                if (isPalindrome(product)){
                    largestPalindrome = product;
                }
            }
        }
    }
    cout << largestPalindrome << endl;
    return 0;
}

bool isPalindrome(int number){
    string numberString = to_string(number);
    int l = numberString.length() - 1;
    for (int k = 0; k <= l; k++){
        if(numberString[k] != numberString[l]){
            return false;
        }
        l--;
    }
    return true;

}
