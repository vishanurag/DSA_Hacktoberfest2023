
//This code is written by Anurag Vishwakarma.
//Portfolio Link: https://vishanurag.github.io



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
        ListNode *before = NULL, *after;

        for(ListNode *trav = head; trav != NULL; trav = after) {
            after = trav->next;
            trav->next = before;
            before = trav;
            if(after == NULL) {
                head = trav;
                break;
            }
        }

        return head;
    }
};
