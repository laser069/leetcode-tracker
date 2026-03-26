// Last updated: 3/26/2026, 1:26:47 PM
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
    bool isPalindrome(ListNode* head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head->next;
        while(fastPtr && fastPtr->next){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        ListNode* curr = slowPtr->next;
        ListNode* prev = nullptr; 
        
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        while(prev){
            if(prev->val != head->val)return false;
            prev = prev->next;
            head = head->next;
                        
        }
    return true;

        
    }
};