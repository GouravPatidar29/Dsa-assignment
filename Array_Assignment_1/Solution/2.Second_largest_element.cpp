#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[6]={4,6,7,2,8,1};
    int max1=INT_MIN;
    int max2=max1;
    for(int i=0;i<6;i++)
    {
        if(max1<arr[i])
        {
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i] && arr[i]!=max1)
        {
           max2=arr[i];

        }
    }
    if(max2==INT_MIN)
    {
        cout<<"no second elements in the array";
    }
    else
     cout<<"Second Largets Elements="<<max2;
}