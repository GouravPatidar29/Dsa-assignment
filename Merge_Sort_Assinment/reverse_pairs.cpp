class Solution {
public:
    int ans=0;
     void merge(vector<int>& a,int low,int mid,int hi)
    {
        int i=low,j=mid+1;
        while(i<=mid && j<=hi)
        {
           if((long long int)a[i]>(long long int)2*a[j])
           {
            ans+=mid-i+1;
            j++;
           }
           else i++;
        }
        i=low,j=mid+1;
        vector<int> b;

        while(i<=mid && j<=hi)
        {
            if(a[i]<a[j])
            {
                b.push_back(a[i++]);
            }
            else b.push_back(a[j++]);
        }
        while(i<=mid)b.push_back(a[i++]);
        while(j<=hi)b.push_back(a[j++]);

        for(int i=low;i<=hi;i++)
        {
            a[i]=b[i-low];
        }
    }

     void mergesort(vector<int>& a,int low,int hi)
     {
        if(low==hi)return;
        int mid=(low+hi)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,hi);
        merge(a,low,mid,hi);
     }
    int reversePairs(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return ans;
    }
};