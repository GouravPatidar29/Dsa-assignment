#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(10);
    v.push_back(6);
    v.push_back(2);
    v.push_back(9);
    int min=v[0];
    for(int i=0;i<v.size();i++)
    {
        if(min>v[i])
        {
            min=v[i];
        }
    }
    cout<<"Minimun value="<<min;

}