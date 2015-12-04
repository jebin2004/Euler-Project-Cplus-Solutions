#include <iostream>
#include "problem1/MultiplesOf3Or5.h"
#include "problem2/LargestPrimeFactor.h"
#include "problem3/EvenFibonacci.h"

using namespace std;

int main()
{
    MultiplesOf3Or5 multiplesOf3Or5;
    cout << "Sum of Multiple of 3 or 5: " << multiplesOf3Or5.sumOfMultiplesOf3Or5(1000) << endl;

    LargestPrimeFactor largestPrimeFactor;
    cout << "Largest Prime Factor: " << largestPrimeFactor.findLargestPrimeFactor(600851475143) << endl;

    EvenFibonacci evenFibonacci;
    cout << "Sum of Even Fibonacci: " << evenFibonacci.sumofEvenFibonacci(4000000) << endl;
    return 0;
}
