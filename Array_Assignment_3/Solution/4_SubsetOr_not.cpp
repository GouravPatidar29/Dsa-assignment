#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,5,9,7,6,3};
    int arr1[4]={1,5,9,7};
    int count=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(arr1[i]==arr[j])
            count++;
        }
    }
    if(count==4)
     cout<<"Array is subset of other";
    else
    cout<<"Array is not subset of other";
}