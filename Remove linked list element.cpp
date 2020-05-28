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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* a=head,*b=NULL;
        int i=0;
        while(a)
        {
            if(a->val == val && i==0)
            {
                head = a->next;
                a->next = NULL;
                a = head;
            }else if(a->val == val && i>0)
            {
                b->next = a->next;
                a->next = NULL;
                a=b->next;
            }
            else
            {
                a=a->next;
                if(b == NULL)
                {
                    b=head;
                }else{
                    b=b->next;
                }
                i++;
            }
        }
        
        return head;
    }
};
