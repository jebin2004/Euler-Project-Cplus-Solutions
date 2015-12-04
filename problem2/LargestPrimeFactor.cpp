#include "LargestPrimeFactor.h"

int LargestPrimeFactor::findLargestPrimeFactor(int x)
{
    for(int i=x; i>0; i--)
    {
	    if(x%i==0)
	    {
            int flag = 0;
	        for(int j=2;j<=i/2;++j)
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
