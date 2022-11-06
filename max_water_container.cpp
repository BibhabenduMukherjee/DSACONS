#include <bits/stdc++.h>
using namespace std;
// 2021-22

int slove(int a[] , int n){


	int maxi = INT_MIN;
	int i = 0;
	int j = n-1;

	while(i < j)
	{
       maxi = max(  maxi ,(j-i) * min(a[i] , a[j]));

       if(a[i] < a[j] ) i++;
       else j--;
	}

	return 
}

int main()
{


	return 0;
}
