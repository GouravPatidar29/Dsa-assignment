#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3];
    cout<<"Enter the numbers of First matrix";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>mat1[i][j];
        }
    }
    int mat2[3][3];
    cout<<"Enter the numbers of second matrix";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>mat2[i][j];
        }
    }
    int mat3[3][3];
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           mat3[i][j]=mat1[i][j]+mat2[i][j];
           cout<<mat3[i][j]<<"  ";
        }
        cout<<endl;
    }

}