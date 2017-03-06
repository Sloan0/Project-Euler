#include <stdio.h>
#include <iostream>

using namespace std;

long findSmallestFactor(long number);

int main(){
    long factorA = 600851475143;
    long factorB;
    bool notFound = true;

    while (notFound){
        factorB = findSmallestFactor(factorA);
        if(factorB == factorA){
            notFound = false;
        }
        else{
            factorA = factorA/factorB;
        }


    }

    cout << factorA << endl;
    return 0;
}

//the smallest non-1 factor of a number will be prime
long findSmallestFactor(long number){
    long smallestFactor = 2;
    while (number % smallestFactor != 0){
        smallestFactor++;
    }
    return smallestFactor;

}
