#include<iostream>
using namespace std;
int main()
{
    int arr[6]={7,6,9,8,7,2};
    int esum=0,osum=0;
    for(int i=0;i<6;i++)
    {
      if(i%2==0)
       esum=esum+arr[i];
       else
       osum=osum+arr[i];
    }
    cout<<"The Diffrence is  "<<(esum-osum);
}