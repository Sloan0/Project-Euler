#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    //sum of squares
    int sumOfSquares = 0;
    for (int i = 1; i <= 100; i++){
        sumOfSquares = sumOfSquares + i * i;
    }
    //square of sum
    int squareOfSum;
    for (int i = 1; i <= 100; i++){
        squareOfSum += i;
    }
    squareOfSum = squareOfSum * squareOfSum;
    cout << squareOfSum - sumOfSquares << endl;

    return 0;
}
