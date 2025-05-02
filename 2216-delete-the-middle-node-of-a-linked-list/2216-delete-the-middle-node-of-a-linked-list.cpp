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

    ListNode* getMiddle(ListNode* &slow, ListNode* &fast, ListNode* &midPrev){
        while(fast != NULL){

            fast = fast->next;
            
            if(fast == NULL){
                return slow;
            }

            fast = fast->next;
            midPrev = slow;
            slow = slow->next;
        }

        return slow;
    }

    ListNode* deleteMiddle(ListNode* head) {
        
        if(head->next == NULL){
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* midPrev = NULL;
        
        ListNode* middle = getMiddle(slow, fast, midPrev);
        
        midPrev->next = middle->next;

        middle->next = NULL;
        delete middle;

        return head;
    }
};