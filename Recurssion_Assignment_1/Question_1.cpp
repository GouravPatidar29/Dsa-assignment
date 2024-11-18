#include<iostream>
using namespace std;
//1 2 3 4 5 4 3 2 1
void IncPrint(int n)
{
   if(n==0)return;
   IncPrint(n-1);
   cout<<n<<" ";
}
void DecPrint(int n)
{
   if(n==0)return;
   cout<<n<<" ";
   DecPrint(n-1);
}
int main()
{
  IncPrint(5);
  DecPrint(4);
}