#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter th number";
     cin>>n;
     int q=n,res=0,rem=0;
     while(q!=0)
     {
       rem=q%10;
       res=res*10+rem;
       q=q/10;
     }
     if(res==n)
     {
        cout<<"No is Palidrome";
     }
     else
      cout<<"No is not Palidrome";
}