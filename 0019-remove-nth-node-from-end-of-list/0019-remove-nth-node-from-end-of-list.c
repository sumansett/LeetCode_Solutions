/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *cur=head;
    int c=0;
    while(cur!=NULL)
    {
        cur=cur->next;
        c++;
    }
    int pos=c-n;
    cur=head->next;
    struct ListNode *pre=head;
    if(pos==0)
    {
        head=cur;
        return head;
    }
    else{
        for(int i=1;i<pos;i++)
        {
            pre=cur;
            cur=cur->next;
        }
        pre->next=cur->next;
    
    return head;

    }
    
    

        
}