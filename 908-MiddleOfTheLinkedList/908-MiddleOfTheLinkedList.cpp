// Last updated: 3/26/2026, 1:26:14 PM
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
    ListNode* middleNode(ListNode* head) {
        ListNode* a = head;
        int count = 1;
        while(head->next !=nullptr){
            cout<<head->val<<endl;
            head = head->next;
            count++;
        }
        int middle  = (count/2);
        int c= 0;
        
        while(c<middle){
            
            a = a->next;
            c++;
            
        }
return a;
    }
    
};