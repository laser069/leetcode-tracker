// Last updated: 4/21/2026, 2:51:09 PM
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
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next;

        while(curr!=nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }


    ListNode* splitLL(ListNode* head){
        ListNode* fr = head;
        ListNode* slow = head->next;
        ListNode* fast = head->next->next;

        while(fast&&fast->next){
            fast=fast->next->next;
            slow = slow->next;
        }
        slow = reverse(slow);
        return slow;
    }

    int pairSum(ListNode* head) {
        ListNode* secondPart = splitLL(head);
        int maxTwin = 0;
        while(secondPart){
            maxTwin = max(maxTwin,secondPart->val+head->val);
            secondPart = secondPart->next;
            head = head->next;
        }
        return maxTwin;
    }
};