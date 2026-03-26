// Last updated: 3/26/2026, 1:28:02 PM
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
    ListNode* deleteNodeAtEnd(ListNode* head,int n){
        ListNode* fastPt = head;
        ListNode* slowPt = head;

        while(n-->0){
            fastPt=fastPt->next;
        }
        if (fastPt == nullptr){
            return head->next;
        }
        while(fastPt->next != nullptr){
            slowPt = slowPt->next;
            fastPt = fastPt->next; 
        }
        slowPt->next = slowPt->next->next;

    return head;

    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        return deleteNodeAtEnd(head,n);
        
    }
};