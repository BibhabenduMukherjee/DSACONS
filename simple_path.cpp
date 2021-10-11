#include <bits/stdc++.h>
using namespace std;






int lcs(string s1 , string s2)
{
   int n = s1.size();
   int m = s2.size();


   vector< vector<int> > dp(s1.size()+1, vector<int>(s2.size()+1));
 
   for(int i =1 ; i<=n; i++){

   for(int j = 1 ; j <=m ; j++)
   {
   	  dp[i][j] = (s1[i-1]==s2[j-1]) ?  (1 + dp[i-1][j-1]) : max(dp[i][j-1] , dp[i-1][j]); 
   }
}
  return dp[n][m];

}






int main()
{    


#ifndef ONLINE_JUDGE

freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

#endif



    string s1  , s2;
    cin >> s1 >> s2;

    cout << lcs(s1 , s2);
	return 0;
}