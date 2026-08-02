/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *pre=NULL,*cur=head;
    while(cur!=NULL)
    {
        if(cur->val==val)
        {   
            if(cur==head)
            {
                head=cur->next;
                cur=head;
            }
            
            else{
                pre->next=cur->next;
                cur=pre->next;
            }
            
        }
        else{
            pre=cur;
            cur=cur->next;
        }
        
    }
    return head;
}