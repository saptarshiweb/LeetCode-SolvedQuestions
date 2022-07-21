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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int c=0;
        ListNode* tem=head;
        ListNode* prev=tem;
        while(tem->next)
        {
            prev=tem;c++;tem=tem->next;
        }
        n=c-n+2;
        if(n==1)
        {
            tem=head->next;
            head->next=NULL;
            return tem;
        }
        else if(n==c+1)
        {
            prev->next=NULL;return head;
        }
        tem=head;
        for(int i=1;i<n;i++)
        {
            prev=tem;
            tem=tem->next;
        }
        prev->next=tem->next;
        
        return head;
        
        
    }
};