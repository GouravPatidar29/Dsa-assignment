#include<iostream>
using namespace std;
int main()
{
    int a[4][4];
    cout<<"Enter the numbers of First matrix";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    int max=a[0][0];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
           if(max<a[i][j])
           {
            max=a[i][j];
           }
        }
    }
    cout<<"max= "<<max;
}