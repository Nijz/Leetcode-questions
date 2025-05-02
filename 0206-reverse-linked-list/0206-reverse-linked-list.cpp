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

    ListNode* reverse(ListNode* &current, ListNode* &prev){

        if(current == NULL){
            return prev;
        }

        ListNode* forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
        return reverse(current, prev);
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = NULL;

        return reverse(current, prev);
    }
};