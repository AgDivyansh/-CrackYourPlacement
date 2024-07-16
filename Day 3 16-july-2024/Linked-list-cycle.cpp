class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head ;
        ListNode * fast = head; 
        if (head == NULL || head->next == NULL)
        {
            return false ;
        }
       while (fast != NULL)
       {
        fast = fast->next ;
        if (fast->next)
        {
            fast = fast->next ;
        }
        slow = slow->next ;
        if (slow == fast)
        {
            return true ;
        }
        
       }
        return false ;
    }
};