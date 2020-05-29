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
    bool isPalindrome(ListNode* head) {
        
        ListNode*curr=head;
        
        vector<int>v,t;
        while(curr != NULL)
        {
            v.push_back(curr->val);
            t.push_back(curr->val);
            curr = curr->next;
        }
        reverse(t.begin(),t.end());
        
        if(t == v)
        {
            return true;
        }else{
            return false;
        }
    }
};
