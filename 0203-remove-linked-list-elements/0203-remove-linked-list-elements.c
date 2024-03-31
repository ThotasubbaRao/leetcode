/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* q1 = NULL;
    struct ListNode* q2 = head;
    while (q2 != NULL) {
        if (q2->val == val){
            if (q1 == NULL) {
                head = q2->next;
                free(q2);
                q2 = head; 
            }
            else{
                q1->next = q2->next;
                free(q2);
                q2 = q1->next;
            }
        }
        else{
            q1 = q2;
            q2 = q2->next; 
        }
    }
    return head;
}