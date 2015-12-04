#include "LargestPrimeFactor.h"

long long LargestPrimeFactor::findLargestPrimeFactor(long long x)
{
    for(long long i=600851475143; i>0; i--)
    {
	    if(x%i==0)
	    {
            int flag = 0;
	        for(long long j=2;j<=i/2;++j)
	        {
	            if(i%j==0)
	            {
	                flag= 1;
	                break;
	            }
            }
            if(flag==0)
            {
                return i;
                break;
            }
	    }
	}
	return 0;
}
