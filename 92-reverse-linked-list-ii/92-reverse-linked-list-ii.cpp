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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if(!head||!head->next)
            return head;
        
        ListNode* dummy=new ListNode(-1);dummy->next=head;
        
        ListNode* it=dummy;ListNode* previt=NULL;
        //till the left index
        
        for(int i=0;i<left;i++){
            previt=it;it=it->next;
        }
        
        ListNode* itR=it;
        ListNode* prevR=previt;
        
        for(int i=left;i<=right;i++)
        {
            ListNode* forward=itR->next;itR->next=prevR;
            prevR=itR;itR=forward;
        }
        
        previt->next=prevR;it->next=itR;
        
        return dummy->next;
        
    }
};