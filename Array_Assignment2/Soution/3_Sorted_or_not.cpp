#include<iostream>
using namespace std;
int main()
{
    int arr[6]={5,6,8,10,20,21};
    bool flag=true;
        if(arr[0]>arr[1])
        {
            for(int j=1;j<5;j++)
            {
              if(arr[j]<arr[j+1])
              {
                 flag=false;
                 cout<<"array is not sorted";
                 break;
              }
            }
        }
        if(arr[0]<arr[1])
        {
            for(int j=1;j<5;j++)
            {
              if(arr[j]>arr[j+1])
              {
                 flag=false;
                 cout<<"array is not sorted";
                 break;
              }
            }
        }
    if(flag==true)
    {
        cout<<"array is sorted";
    }
}