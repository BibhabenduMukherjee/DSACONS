#include <bits/stdc++.h>
using namespace std ;

// Split the given array into K 
// sub-arrays such that maximum sum of all sub arrays is minimum


// Input : Array[] = {1, 2, 3, 4}, K = 3 
// Output : 4 
// Optimal Split is {1, 2}, {3}, {4} . Maximum sum of all subarrays is 4,
// which is minimum possible for 3 splits.
// Input : Array[] = {1, 1, 2} K = 2 

// Output : 2 

// 2021-22


bool slove(int a[]  , int n  , int  limit , int m)
{
	int c =1;
	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		if(a[i] > limit) return false;

		if(a[i] + sum > limit)
		{
			count++;
		    sum = a[i];
		}

		else
		{
			sum+=a[i];
		}
	}

	return c<=m;
}

int split_array(int a[] , int k , int n)
{
   int l = *max_element(a, a+n);
   int h =0 ;

   for(int i =0; i<n; i++)
   {
   	h = h+a[i];
   }
      int ans = h;
   while(l<=h)
   {
   	int m = (l+h)/2;

   	if(slove(a,  n , m , k)== false)
   	{
      l = m+1;
   	}else
   	{
      ans = m;
      h = m-1;
   	} 

   }

return ans;
}


int main()
{

    int a[] = { 1, 2, 3, 4 };
    int n = sizeof(array) / sizeof(array[0]);
    int K = 3;
    cout << split_array(a, n, K);
   

	return 0;
}
