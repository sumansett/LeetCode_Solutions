/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *pre=NULL,*cur=head,*rear;
    if(head==NULL)
    {
        return head;
    }
    rear=cur->next;
    while(rear!=NULL)
    {
        cur->next=pre;
        pre=cur;
        cur=rear;
        rear=rear->next;

    }
    cur->next=pre;
    head=cur;

    return head;
}