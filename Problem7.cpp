#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int primesFound = 1;
    long current = 3;
    long primes[10001];
    primes[0] = 2;
    bool isPrime = true;

    while (primesFound < 10001){
        current = current + 2;
        for(int i = 0; i < primesFound; i++){
            if(current % primes[i] == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            primesFound++;
            primes[primesFound - 1] = current;
        }
        isPrime = true;
    }
    
    cout << current << endl;

    return 0;
}
