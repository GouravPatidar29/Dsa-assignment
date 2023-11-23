#include<iostream>
using namespace std;
int main()
{
    int a[3][4];
     cout<<"Enter the numbers of First matrix";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    int row;
     int max=a[0][0]+a[0][1]+a[0][3]+a[0][2];
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            sum=sum+a[i][j];
        }
        if(max<sum)
        {
            max=sum;
            row=i;
        }
    }
    cout<<"max sum row is  "<<row;

}