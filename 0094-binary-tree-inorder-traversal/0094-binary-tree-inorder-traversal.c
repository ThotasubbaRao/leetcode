/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inorderTraversalHelper(struct TreeNode* root, int* result, int* index) {
    if (root == NULL) {
        return;
    }
    
    inorderTraversalHelper(root->left, result, index);
    result[(*index)++] = root->val;
    inorderTraversalHelper(root->right, result, index);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int count = 0;
    void countNodes(struct TreeNode* node) {
        if (node == NULL) {
            return;
        }
        countNodes(node->left);
        count++;
        countNodes(node->right);
    }
    countNodes(root);
    
    
    int* result = (int*)malloc(count * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }
    
    
    int index = 0;
    inorderTraversalHelper(root, result, &index);
    
    
    *returnSize = count;
    return result;
}