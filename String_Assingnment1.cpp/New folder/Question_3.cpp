#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   int i=0;
   int j=str.size()-1;
   while(i<=j)
   {
    if(str[i]==str[j])
    {
        i++;
        j--;
    }
    else{
        cout<<"not a palidrome";
        return 0;
    }
   }
   cout<<"is palidrome";
}