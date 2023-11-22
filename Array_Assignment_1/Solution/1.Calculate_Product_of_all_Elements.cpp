#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5};
    double product=1;
    for(int i=0;i<5;i++)
    {
      product*=a[i];
    }
    cout<<"Product of numbers of array is "<<product;
}