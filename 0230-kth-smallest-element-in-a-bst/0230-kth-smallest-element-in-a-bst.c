/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inorder(struct TreeNode*root,int k,int* ans,int* c)
{
    if(root==NULL || *c==k)
    {
        return;
    }
    inorder(root->left,k,ans,c);
    (*c)++;
    if(*c==k)
    {
    *ans=root->val;
    return;}
    inorder(root->right,k,ans,c);
}
int kthSmallest(struct TreeNode* root, int k) {
    int c=0,ans=-1;
    inorder(root,k,&ans,&c);
    return ans;
}