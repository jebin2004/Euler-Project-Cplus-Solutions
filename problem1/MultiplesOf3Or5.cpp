#include "MultiplesOf3Or5.h"

int MultiplesOf3Or5::sumOfMultiplesOf3Or5(int x)
{
    int result = 0;
    for(int i=x-1; i>0; i--)
    {
        if(i%3==0 || i%5==0)
        {
            result = result + i;
        }
    }
    return result;
}
