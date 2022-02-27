int calc(Node* root, int &sum){
    if(!root)
        return sum;
    if(!root->left&& !root->right)
        {
            sum+=root->data;
        }
    calc(root->left, sum);
    calc(root->right, sum);
}
int sumOfLeafNodes(Node *r ){
    if(!r)
        return 0;
    int sum=0;
    calc(r, sum);
}
