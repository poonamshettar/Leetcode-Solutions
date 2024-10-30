/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode*cur=head;
    struct ListNode*dummy;
    struct ListNode*prev=head;
    while(cur!=NULL)
    {
        if(head->val==val)
        {
            dummy=head;
            head=head->next;
            free(dummy);
            cur=prev=head;
        }
        else if(cur->val==val)
        {
            prev->next=cur->next;
            free(cur);
            cur=prev->next;
        }
        else
        {
            prev=cur;
            cur=cur->next;
        }
    }
    return head;
}