#include<iostream>
using namespace std;
int main()
{
     int A[10][10];
     int n,m;
    cout<<"Enter the number of rows and column";
    cin>>n>>m; 
    cout<<"Enter the numbers of First matrix";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"Enter the first cordinate";
    cin>>l1>>r1;
    cout<<"Enter the first cordinate";
    cin>>l2>>r2;
    cout<<"THe sum is"<<(A[l1][r1]+A[l2][r2]);
}