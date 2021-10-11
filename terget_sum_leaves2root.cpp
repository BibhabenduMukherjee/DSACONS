#include <bits/stdc++.h>
using namespace std;


bool slove(node* root , int terget)
{

	if(!root) return false;

	if(root->data == terget )
	{
		return (root->data - terget) == 0;
	}

	return slove(root->left , terget - root->data) || slove(root->right , terget-root->data);
}

int main()
{

  // tree start
	return 0;
}