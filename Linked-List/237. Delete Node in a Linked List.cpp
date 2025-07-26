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
    void deleteNode(ListNode* node) {
        // Copy the value of the next node into the current node
        node->val = node->next->val;

        // Bypass the next node (effectively deleting it)
        node->next = node->next->next;
    }
};
