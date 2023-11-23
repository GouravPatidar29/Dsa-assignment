#include<iostream>
using namespace std;
int main()
{
    int arr[6]={5,6,5,9,8,7};
    for(int i=0;i<6;i++)
    {
        int count=0;
      for(int j=i+1;j<6;j++)
      {
        if(arr[i]==arr[j])
        {
          count++;
        }
      }
      if(count==0)
      {
        cout<<arr[i];
        break;
      }
    }
}