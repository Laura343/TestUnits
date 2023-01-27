#include <lib/lib.h>

int fibonacci(int n)
{
    if(n<1)
    {
        return -1;
    }
    int first=0,second=1;
    for(int i=0;i<n-1;++i)
    {
        second=first+second;
        first=second-first;
    }
    return first;
}

bool isPrime(int n)
{
    if(n==2)
    {
        return true;
    }
    if(n==1 || n%2==0 || n<1)
    {
        return false;
    }
    for(int i=3;i<n/2;i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

bool isPowerOfTwo(int n)
{
    if(n>0 && (n&(n-1))==0)
    {
        return true;
    }
    return false;
}

int numberOfOnes(int n)
{
    int num=0;
    while(n)
    {
        if((n&1)==1)
        {
            num++;
        }
        n=n>>1;
    }
    return num;
}

