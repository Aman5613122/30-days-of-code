//leetcode questions

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* a=headA,*b=headB;
        if(a == NULL || b==NULL)
            return NULL;
        
        unordered_set<ListNode*>s;
        bool ans=0;
        while(a)
        {
            s.insert(a);
            a=a->next;
        }
        while(b)
        {
            if(s.find(b) != s.end())
            {
                ans=1;
                break;
            }
            s.insert(b);
            b = b->next;
        }
        
        if(ans == 1)
        {
            return b;
        }else{
            return NULL;
        }
    }
};
