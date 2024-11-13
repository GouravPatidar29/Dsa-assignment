#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,6,5,4,3,1};
    int n=6;
    int lo=0;
    int hi=n-1;
    int target=1,ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target)
        {
           ans=mid;
           break;
        }
        else if(arr[mid]>target)lo=mid+1;
        else hi=mid-1;
    }
    if(ans==-1)
        cout<<"Target is not present";
    else 
      cout<<"Target is Present at index "<<ans;

}