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
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    int tne=m*n,count=1;
    while(minr<=maxr && minc<=maxc)
    {
        for(int j=minc;j<=maxc & count<=tne;j++)
        {
            a[minr][j]=count;
            count++;
        }
     minr++;
           for(int i=minr;i<=maxr & count<=tne;i++)
        {
            a[i][maxc]=count;
            count++;
        }
     maxc--;
        for(int j=maxc;j>=minc & count<=tne;j--)
        {
            a[maxr][j]=count;
            count++;
        }
     maxr--;
        for(int i=maxr;i>=minr & count<=tne;i--)
        {
            a[i][minc]=count;
            count++;
        }
     minc++;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
