#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="PWSkills";
    string str=s;
    reverse(s.begin(),s.end());
    cout<<str+s;
}