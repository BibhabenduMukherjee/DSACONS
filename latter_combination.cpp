#include <biyt/stdc++.h>
using namespace std;

//leetcode
class Solution{
public:

    void generateAllString(int start,int size,vector<string>&out,string res,string digits,unordered_map<char,vector<char>>&mp)
    {
      if(res.size() == size)
      {
      	out.push_back(res);
      	return;
      }
       
      // loop through each number in digits

      for(auto x : mp[digits[start]])
      {
         string dup  = res;

          res+=x;
          generateAllString(start+1,n,out,res,digits,mp);
          res = dup;
      }
    }

	vector<string> letterCombinations(string digits)
	{
       // create a result vector

		vector<string> out;

	   // create a hash table that maps each number to it's letter
	   // in phone pattern 

		unordered_map<char , vector<char> > mp;

		mp['2'] = {'a' , 'b' , 'c'};
		mp['3']={'d','e','f'};
        mp['4']={'g','h','i'};
        mp['5']={'j','k','l'};
        mp['6']={'m','n','o'};
        mp['7']={'p','q','r','s'};
        mp['8']={'t','u','v'};
        mp['9']={'w','x','y','z'};

      int n = digits.size();
        if(n==0){
            return out;
        }
        generateAllString(0,n,out,"",digits,mp);


       return out;
	}
};

int main()
{

	return 0;

}
