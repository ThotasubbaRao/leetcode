/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
     struct ListNode* d = (struct ListNode*)malloc(sizeof(struct ListNode));
     d->next = head;

    struct ListNode *first = d, *second = d;

    for (int i = 0; i <= n; i++) {
        first = first->next;
    }

    while (first != NULL) {
        first = first->next;
        second = second->next;
    }
    second->next = second->next->next;
    return d->next;
}