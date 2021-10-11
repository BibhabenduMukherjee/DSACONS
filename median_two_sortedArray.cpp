#include <bits/stdc++.h>
using namespace std;

// create a actual partition 
// cut1 = (l+h)/2;
// cut2 = (n1+n2+1)/2   -   cut1


class solution{

public:
	double slove(vector<int> &nums1 , vector<int> &nums2)
	{
       if(nums1.size() > nums2.size()) return slove(nums2 , nums1);

       int n1 = nums1.size();
       int n2 = nums2.size();

       int l = 0; 
       int h = n1;

       while(l <= h)
       {
       	int cut1 = (low+high) >> 1;
       	int cut2 = (n1+n2 +1) /2 - cut1;

       	int left1 = cut1 == 0 ? INT_MIN : nums1[cut1-1];
       	int left2 = cut2 == 0 ? INT_MIN : nums2[cut2-1];

       	int right1 = cut1==n1 ? INT_MAX : nums1[cut1];
       	int right2 = cut2 == n2 ? INT_MAX : nums2[cut2];

       	if(left1 <= right2 &&  left2 <= right1)
       	{
            if((n1+n2)%2 == 0)
            {
            	int m = max(left1  , left2);
            	int n = min(right1 , right2)
            	return (m+n)/ 2.0;
            }else 
            {
            	return max(left1 , left2);
            }
       	}else if(left1 > right2)
       	{
            h = cut1-1;
       	}else
       	   l = cut1+1;

       }
       return 0.0;
	}
}; 

int main()
{

    // call the slove fucn
     slove();

	return 0;
}