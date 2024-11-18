#include<iostream>
using namespace std;
int sumOddNumbers(int a,int b)
{ 
    if(a>b)return 0;
    if(a%2!=0)return a+sumOddNumbers(a+1,b);
    else return sumOddNumbers(a+1,b);
}
int main()
{
    cout<<sumOddNumbers(1,20);
}