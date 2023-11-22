#include<iostream>

using namespace std;
int main()
{
    int arr[6]={6,8,10,12,16,18};
    int x;
    cout<<"Enter the Value of x  ";
    cin>>x;
    int ans=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>x)
        {
           ans++;
        }
    }
    cout<<"No of Elements Greter than x are "<<ans;
}