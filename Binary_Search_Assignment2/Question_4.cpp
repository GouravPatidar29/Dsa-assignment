#include<iostream>
#include<vector>
using namespace std;

    bool search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            // If we find the target, return true immediately
            if (nums[mid] == target) return true;

            // Handle duplicates: if nums[lo], nums[mid], and nums[hi] are equal, skip edges
            if (nums[lo] == nums[mid] && nums[mid] == nums[hi]) {
                lo++;
                hi--;
            }
            // Left part is sorted
            else if (nums[lo] <= nums[mid]) {
                // Target is in the left sorted part
                if (nums[lo] <= target && target < nums[mid]) {
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }
            // Right part is sorted
            else {
                // Target is in the right sorted part
                if (nums[mid] < target && target <= nums[hi]) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
        }

        return false; // Target not found
    }
int main()
{
    vector<int> v;
    //[2,5,6,0,0,1,2]
    v.push_back(2);
    v.push_back(5);
    v.push_back(6);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
   int  target=0;
   bool found=search(v,target);
   if(found) cout<<"target found";
   else cout<<"Not found";
}
