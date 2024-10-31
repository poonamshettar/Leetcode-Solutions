/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
    ListNode* cur=head;
    vector<int>x;
    while(cur!=NULL)
    {
        x.push_back(cur->val);
        cur=cur->next;
    }
    sort(x.begin(),x.end());
    cur=head;
    int i=0;
    while(cur!=NULL)
    {
        cur->val=x[i];
        i++;
        cur=cur->next;
    }
    return head; 
    }
};