/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
public:
    TreeNode* findMin(TreeNode* curr)
    {
        while(curr->left != nullptr)
        {
            curr = curr->left;
        }
        return curr;
    }
    TreeNode* deleteNode(TreeNode* root, int key)
    {
        if(root == NULL) return root;
        else if(root->val > key)
            root->left = deleteNode(root->left, key);
        else if(root->val < key)
            root->right = deleteNode(root->right, key);
        else
        {
            if(root->left == NULL && root->right == NULL)
            {
                delete root;
                root=NULL;
            }
            else if(root->left == NULL)
            {
                struct TreeNode* temp=root;
                root=root->right;
                delete temp;
            }
            else if(root->right == NULL)
            {
                struct TreeNode* temp=root;
                root=root->left;
                delete temp;
            }
            else
            {
                struct TreeNode* temp = findMin(root->right);
                root->val=temp->val;
                root->right=deleteNode(root->right, temp->val);
            }
        }
        return root;
    }
};
