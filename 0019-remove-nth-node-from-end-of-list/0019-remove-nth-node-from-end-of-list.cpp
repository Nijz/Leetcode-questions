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

    ListNode* removeNthFromEnd(ListNode* head, int n) {
    
        if(head->next == NULL){
            return nullptr;
        }

        ListNode* temp = new ListNode(-1, head);
        ListNode* fast = temp;
        ListNode* slow = temp;

        for(int i = 0; i < n; i++){
            fast = fast->next;
        }

        while(fast->next!=nullptr){
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* deleteNode = slow->next;
        slow->next = deleteNode->next;
        deleteNode->next = nullptr;
        delete deleteNode;

        return temp->next;
    }
};