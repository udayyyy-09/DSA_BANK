/* 
linked list is said to contain a cycle if any node is visited more than once while traversing the list.
 Given a pointer to the head of a linked list, determine if it contains a cycle. If it does, return . Otherwise, return .

FLOYD CYCLE DETECTION. (tortoise and Hare)

bool has_cycle(SinglyLinkedListNode* head) {
    //Cycle Detection Algo = hoise and turtle 
    SinglyLinkedListNode* slow = head;
    SinglyLinkedListNode* fast = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast) return 1;
    }
    return 0;
    
}

*/