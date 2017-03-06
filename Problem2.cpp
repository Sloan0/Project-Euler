#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int current = 1;
    int old = 1;
    while(current < 4000000){
        if (current % 2 == 0){
            sum += current;
        }
        current = current + old;
        old = current - old;
    }
    cout << sum << endl;
    return 0;
}
