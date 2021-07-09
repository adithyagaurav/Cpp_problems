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

/* 

FASTER THAN 75% of the solutions


Solved this question using recursion. Function calls itself for every new node. If its a leaf node, then function calls itself with the terminating condition. Fucntion calls itself with a string argument which keeps on appending each node in the path and its pushed to output vector when leaf node is reached.


*/


class Solution {
public:
    
    // Initialize output vector globally
    vector<string> v;
    
    // Recursive function
    int traverseBranches(TreeNode* root, string str){
        
        // Termination trigger, push the string to output vector
        if(root==NULL){
            v.push_back(str);
            return 0;
        }
        
        // Convert value of node to and append it to path string
        string g = to_string(root->val);
        if(str == ""){
            str.append(g);
        }
        else{
            str.append("->");
            str.append(g);
        }
        
        // Check for leaf node, if yes, function calls itself with terminating trigger
        if(!root->left && !root->right)
            traverseBranches(NULL, str);
        else{
            
            // Only let function call itself for non-NULL nodes
            if(root->left)
                traverseBranches(root->left, str);
            if(root->right)
                traverseBranches(root->right, str);
        }
        return 0;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        traverseBranches(root, "");
        return v;
    }
};