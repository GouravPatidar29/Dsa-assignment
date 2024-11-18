#include<iostream>
using namespace std;
bool PowerOfTwo(int n)
{
    if(n==1)return true;
    if(n%2!=0 || n==0)return false;
    return PowerOfTwo(n/2);
}
int main()
{
if(PowerOfTwo(64))cout<<"Yes";
else cout<<"no";
}