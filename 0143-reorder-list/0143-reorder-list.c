/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
    struct ListNode *stack[50000];
    struct ListNode *temp=head;
    int i=0;
    while(temp)
    {
        stack[i]=temp;
        temp=temp->next;
        i++;
    }
    temp=head;
    struct ListNode *sec=NULL;
    int k=i;
    for(int j=0;j<i/2;j++)
    {
        sec=temp->next;
        temp->next=stack[--k];
        temp->next->next=sec;
        temp=sec;
    }
    temp->next=NULL;
}