/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* f=head;
    struct ListNode* s=head;
    if(head==NULL || head->next==NULL) return false;
    while(f !=NULL && f->next !=NULL){
        f=f->next->next;
        s=s->next;
        if(f==s) return true;
    }
    return false;
}