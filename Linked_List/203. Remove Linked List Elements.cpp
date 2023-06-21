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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* d;
        while(head != NULL && head->val == val){
            d = head;
            head = head->next;
            delete d;
        }
        ListNode* tem = head;
        while(tem != NULL && tem->next != NULL){
            if(tem->next->val == val){
                d = tem->next;
                tem->next = tem->next->next;
                delete d;
            }
            else{
                tem = tem->next;
            }
         
        }
        return head;
    }
};