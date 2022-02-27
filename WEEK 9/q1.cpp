void helper(Node* root, int &count){
    if(!root)
        return;
    if(!root->left&& !root->right)
        {
            count++;
            return;
        }
    helper(root->left, count);
    helper(root->right, count);
}
int countLeaves(Node* root)
{
  // Your code here
  if(root==NULL)
    return 0;
    int count=0;
    helper(root, count);
    return count;
}
