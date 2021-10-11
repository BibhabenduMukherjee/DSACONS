
// given a BST root
// and a node and a value k
// node value and k is distance 
// you have to print all the node at k distance from the given node




// given a terrget and a integer k

void kdown(node* root , int k , node* blocknode , vector<int> &ans)
{
	if(root == NULL || k<0 || root == blocknode){
		return;
	}

	if(k==0)
	{
		ans.push_back(root->data);
		return;
	}

	kdown(root->left ) // 
	kdown(root->right )// 


}



int Distancek(node* root , int terget ,int sum =0 , vector<int> &ans , int k)
{



	if(root == NULL) return -1;

	if(root->data == terget)
	{

		/// sum+=root->data;
		kdown(root , k-0 , NULL , ans);
		return 1;
		// return sum;
		   // distance from node to it's parent
	}

	int ld = Distancek(root->left , terget , ans);
	if(ld!= -1)
	{

        // sum+=root->data;

		kdown(root , k-1 , root->left , ans);
		return ld+1;
		// return sum;
	}
	int rd = Distancek(root->right , terget , ans);

    if(rd!= -1)
	{
		kdown(root , k-1 , root->right , ans);
		return rd+1;
	}
      return -1;
}


vector<int> Distancek()
{

}





