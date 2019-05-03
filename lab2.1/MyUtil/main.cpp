#include <iostream>
#include "myUtil.h"
using namespace std;

int main()
{
    double a=12,b=2, c = 8;
    cout<<"12,2,8 create a triangle is: "<<myUtil::isTriangle(12,2,8)<<endl;
    cout<<"The factorial of 6 is: "<<myUtil::factorial(6)<<endl;
    cout<<"Saying that 17 is a prime number is: "<<myUtil::isPrime(17);
    return 0;
}
