//leetcode questions

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
        
          if(head == NULL)
        {
            return head;
        }
        
        ListNode* a = head, *b = head->next;
        
        while(b != NULL && a != NULL)
        {
            if(a->val == b->val)
            {
                if(b->next != NULL)
                {
                    a->next = b->next;
                    b = a->next;
                }
                else{
                    a->next = NULL;
                    break;
                }
            }
            else{
                a = a->next;
                b = b->next;
            }
            
        }
        
        return head;
    }
};
