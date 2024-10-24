#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
     string s="2497578";
     sort(s.begin(),s.end());
     cout<<"second Largest no is "<<s[s.size()-2];
    

    

}