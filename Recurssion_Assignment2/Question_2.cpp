#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int noOfDigits(int n)
{
    if(n==0)return 0;
    return 1+noOfDigits(n/10);
}
int reversePositive(int n,int d)
{
    if(n==0)return 0;
    return n%10*pow(10,d-1)+reversePositive(n/10,d-1);
}
int main()
{
 int d=noOfDigits(501);
 cout<<reversePositive(501,d);
}