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
    ListNode* reverseList(ListNode* head) {
        
        ListNode *pre=NULL,*curr = head,*nt=NULL;
        
        while(curr != NULL)
        {
            nt = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nt;
        }
        head = pre;
        
        return head;
    }
};
