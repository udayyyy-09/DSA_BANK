/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
( https://leetcode.com/problems/remove-nth-node-from-end-of-list/?envType=problem-list-v2&envId=linked-list ) 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next){
            return NULL;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        for(int i=0;i<n;i++){
            fast = fast->next;
        }
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* del = slow->next;
        slow->next = del->next;
        delete del;
        return dummy->next;
    }
};
*/