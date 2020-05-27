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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       
        ListNode *temp1=l1, *temp2=l2, *a, *b;
        if(temp1 == NULL){return l2;}
        if(temp2 == NULL){return l1;}
        if(l1->val < l2->val)
        {
            a = l1;
            b = l1;
            l1=l1->next;
        }else{
            a = l2;
            b = l2;
            l2 = l2->next;
        }
        
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val < l2->val)
            {
                a->next = l1;
                l1 = l1->next;
            }else{
                a->next = l2;
                l2 = l2->next;
            }
            a = a->next;
        }
        
        if(l1 == NULL)
        {
            a->next = l2;
        }else{
            a->next = l1;
        }
        
        return b;
        
    }
};
