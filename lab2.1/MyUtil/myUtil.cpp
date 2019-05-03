#include "myUtil.h"

long myUtil::factorial(int num)
{
    long result = 1;
    for(int i = 2; i <=num ; i++)
        result*=i;
    return result;
}
bool myUtil::isPrime(long num)
{
    //bool result;
    for(int i = 2; i*i < num; i++)
    {
        if(num % i == 0) return false;
    }
    return true;
}
bool myUtil::isTriangle(double num1, double num2, double num3)
{
    return (num1 < (num2 + num3))
            &&(num2 < (num1 + num3))
            &&(num3 < (num1 + num2));
}
