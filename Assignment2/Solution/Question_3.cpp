#include<iostream>
using namespace std;
int main()
{
    int m,n,p,q;
    
    cout<<"Enter the number of rows in matrix";
    cin>>m;
    cout<<"Enter the number of column in matrix";
    cin>>n;
    
    cout<<"Enter the values of matrix "<<endl;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    
    
    for(int i=0;i<m;i++)
     {
         if(i%2==0)
        {
          for(int j=0;j<n;j++)
         {
            cout<<a[i][j]<<" ";
         }
        }
         else
           {
             for(int j=n-1;j>=0;j--)
             {
                 cout<<a[i][j]<<" ";
             }
           }
     }
   
}