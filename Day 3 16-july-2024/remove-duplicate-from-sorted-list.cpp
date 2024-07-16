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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL)
        {
            return head ;
        }
        ListNode * ans = new ListNode (-1) ;
        ListNode* tail = ans ;
        tail->next = head ;
        tail = head ;
        head = head->next ;
        while (head)
        {
            if (tail->val != head->val)
            {
                tail->next = head ; 
                tail = head ;
            }
            head = head->next ;
        }
        tail->next = NULL ;
        return ans->next ;
    }
};