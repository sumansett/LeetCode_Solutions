/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *p=head;
    int c=0;
    while (p!=NULL)
    {   
        p=p->next;
        c++;
        
    }
    p=head;
    int arr[c];
    int i=0;
    while(p!=NULL && i<c)
    {
        arr[i]=p->val;
        p=p->next;
        i++;
    }

    int l=0,r=c-1;
    while(l<r)
    {   
        if(arr[l]!=arr[r])
        {
            return false;
        }
        
        l++;
        r--;
        
    }
    return true;
}