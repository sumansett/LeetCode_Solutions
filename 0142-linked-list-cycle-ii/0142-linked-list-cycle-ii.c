/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast=head,*slow=head;
    bool  flag=false;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            flag=true;
            break;
        }
    }
    if( flag==true)
    {
        slow=head;
        while(fast!=slow)
        {
            slow=slow->next;
            fast=fast->next;

        }

        return slow;
    }
    return NULL;
}