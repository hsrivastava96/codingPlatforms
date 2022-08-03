#include<iostream>
#include<vector>
using namespace std;

bool checkPrime(long long int n)
{
    if(n == 1)
        return false;
    else if(n == 2 || n == 3)
        return true;
    else if(n%2 == 0 || n%3 == 0)
        return false;
    else
    {
        if((n-1)%6 == 0)
            return true;
        else if((n+1)%6 == 0)
            return true;
        return false;
    }
}
