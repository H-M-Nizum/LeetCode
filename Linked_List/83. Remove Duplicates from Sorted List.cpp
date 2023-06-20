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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tem = head;
        if(head == NULL) return head;
        while(tem->next != NULL){
            
            if(tem->val == tem->next->val){
                tem->next = tem->next->next;
            }
            if(tem->next == NULL) break;
            else if(tem->val != tem->next->val){
                tem = tem->next;
            }
            
        }
        return head;
    }
};