/*
86. Partition List
( https://leetcode.com/problems/partition-list/description/?envType=study-plan-v2&envId=top-interview-150 )

Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
You should preserve the original relative order of the nodes in each of the two partitions.


class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* first = new ListNode(0);
        ListNode* sec = new ListNode(0);
        ListNode* l1 = first;
        ListNode* l2 = sec;
        while(head){
            if(head->val < x){
                l1->next = head;
                l1 = l1->next;
            }else{
                l2->next = head;
                l2 = l2->next;
            }
            head = head->next;
        }
        l1->next = sec->next;
        l2->next = NULL;
        return first->next;

    }
};
*/