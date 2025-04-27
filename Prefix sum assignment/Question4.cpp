class Solution {
    public:
        vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
            int x=bookings.size();
            vector<int> ans(n,0);
            int j=0;
            while(j<x)
            {
             int start=bookings[j][0]-1;
             int end=bookings[j][1]-1;
             int seats=bookings[j][2];
             while(start<=end)
             {
                ans[start]+=seats;
                start++;
             }
             j++;
    
            }
            
            return ans;
        }
    };