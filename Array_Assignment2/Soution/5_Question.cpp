#include<iostream>
using namespace std;
int main()
{
    int arr[6]={7,6,9,8,7,2};
    for(int i=0;i<6;i++)
    {
      if(i%2==0)
       arr[i]=arr[i]+10;
       else
       arr[i]=arr[i]*2;
        cout<<arr[i]<<"  ";
    }
}