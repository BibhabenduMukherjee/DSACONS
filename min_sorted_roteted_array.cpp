#include <bits/stdc++.h>
using namespace std;


 int find(vector<int>& nums) {
       
        int l = 0, r = nums.size()-1;
        while(l<r)
        {
            int mid = l+(r-l)/2;
            if(nums[l]<=nums[mid] && nums[mid+1]<=nums[r])return min(nums[l],nums[mid+1]);
            else if(nums[l]>nums[mid])
                r = mid;
            else
                l = mid+1;
        }
        return nums[r];
    }

int main()
{

    vector<int> res{3,4,5,1,2};

    cout << find(res);

	return 0;
}