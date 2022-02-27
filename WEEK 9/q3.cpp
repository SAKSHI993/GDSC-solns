void check(Node* root, vector<int> &ans){
    if(!root)
        return;
        
    check(root->left, ans);
    check(root->right, ans);
        
    if(root->left && !root->right){
        ans.push_back(root->left->data);
    }

    else if(root->right && !root->left){
        ans.push_back(root->right->data);
    }
}
vector<int> noSibling(Node* node)
{
    vector<int> ans;
    check(node, ans);
    sort(ans.begin(), ans.end());
    if(ans.size()==0)
        ans.push_back(-1);
    return ans;
}
