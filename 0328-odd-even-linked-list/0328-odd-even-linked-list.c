/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode *p=head,*cur=head,*pre=NULL,*temp=NULL;
    if(head==NULL)
    {
        return head;
    }
    while(p->next!=NULL)
    {
        p=p->next;
    }
    int c=0;
    temp=p;
    while(cur!=temp->next)
    {
        c=c+1;
        if(c%2==0)
        {
            p->next=cur;
            p=p->next;

            pre->next=cur->next;
            cur=pre->next;
        }
        else{
            pre=cur;
            cur=cur->next;
        }

    }
    p->next=NULL;
    return head;
}