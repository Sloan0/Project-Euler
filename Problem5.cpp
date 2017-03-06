#include <stdio.h>
#include <iostream>

using namespace std;


int main(){
    bool notFound = true;
    int number = 0;
    while (notFound){
        number += 20; //has to be a multiple of 20

        //I only check 11-20 since if it is divisible by 20, it is also
        //divisible by 2, 4, 5, and 10. If it is divisible by 18, it is also
        //divisible by 3, 6 and 9. If it is divisible by 14, it is also
        //divisible by 7. If it is divisble by 16, it is also divisible by 8
        for (int i = 11; i < 20; i++){
            if (number % i != 0){
                notFound = true;
                break;
            }else{
                notFound = false;
            }
        }
    }
    cout << number << endl;


return 0;
}
