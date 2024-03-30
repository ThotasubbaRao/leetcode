/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode*arr[100];
    struct ListNode* ptr = head;
    int i = 0;
    while(ptr != NULL){
        arr[i] = ptr;
        i++;
        ptr = ptr->next;
    }
    return arr[(i/2)];
}