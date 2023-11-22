#include<iostream>
using namespace std;
int main()
{
    int arr[6]={5,52,18,29,22,24};
    int max1,max2,max3;
    max1=max2=max3=arr[0];
    for(int i=0;i<6;i++)
    {
        if(arr[i]>max1)
        {
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
        {
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3)
        {
            max3=arr[i];
        }
    }
    cout<<"The three Largest Elements are  "<<max1<<" "<<max2<<"  "<<max3;

}