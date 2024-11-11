#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,3,4};
    int low = 1;
    int high =4, count;
while(low <= high)
{
 int mid = low + (high - low) / 2;
  count = 0;
for(int n : arr)
{
if(n <= mid)
++count;
}

if(count <= mid)
low = mid + 1;
else
high = mid - 1;
}
cout<<low;
}