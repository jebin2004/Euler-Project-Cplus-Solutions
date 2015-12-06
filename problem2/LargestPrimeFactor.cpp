#include "LargestPrimeFactor.h"

long long LargestPrimeFactor::findLargestPrimeFactor(long long number)
{
    int x;
    for(int i = 2; i * i<= number; i++){
            if(number % i == 0){
                while(number % i == 0){
                    number = number/i;
                    x = i;
                }
            }
		}
        if(number != 1){
            return number;
        } else {
            return x;
        }
}
