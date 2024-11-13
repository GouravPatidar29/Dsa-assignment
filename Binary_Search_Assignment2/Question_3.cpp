#include<iostream>
using namespace std;
int main()
{
    int matrix[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int  target = 34;
    int row=3,col=4;
    int i=0,j=3;
    while(i<row && j>=0)
    {
      if(matrix[i][j]==target) 
      {
        cout<<"Elemnet Found in row="<<i<<" column="<<j;
        return 0;
      }
      else if(matrix[i][j]>target)j--;
      else i++;
    }
    cout<<"Not found";
}