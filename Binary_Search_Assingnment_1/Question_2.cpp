#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n);
int main()
{
    int arr[]={0,0,0,1,1,1};
    int n=6;
    int f=0;
    f=firstOccurence(arr,n);
    cout<<f<<endl;
    cout<<(n-f);
}
int firstOccurence(int arr[],int n)
{
    int lo=0;
    int hi=n-1;
    int idx=-1;
  while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==1)
        {
            idx=mid;
              hi=mid-1;
            
        }
        else if(arr[mid]<1)
        {
            lo=mid+1;
        }
        else if(arr[mid]>1)
        {
            hi=mid-1;
        }
    }
    return idx;
}
