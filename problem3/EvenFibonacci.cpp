#include "EvenFibonacci.h"

int EvenFibonacci::sumofEvenFibonacci(int x)
{
    int a=1;
    int b=1;
    int ans=0;
    int result =0;
    for(int i=0;ans<x;i++)
    {
        ans=a+ans;
        a=b;
        b=ans;
        if(ans%2==0){
            result+=ans;
        }
      //return ans;
    }
    return result;
}

