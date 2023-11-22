#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the Elements of Array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int x=0;
    bool flag=false;
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=x)
        {
            cout<<x;
            flag=true;
            break;
        }
    else x++;
    }
    if(flag=false)
    {
        cout<<x;
    }
}