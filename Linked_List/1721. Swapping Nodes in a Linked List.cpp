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
    int size(ListNode *head){
        ListNode *tmp = head;
        int count = 0;
        while (tmp != NULL){
            count++;
            tmp = tmp->next;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int pos = size(head) - k;
        ListNode* tem1 = head; 
        ListNode* tem2 = head;
        ListNode* tem = head;
        int i = 0;
        while(tem != NULL) {
            if(i == k - 1) 
                tem1 = tem;
            if(i == pos)
                tem2 = tem;
            tem = tem->next;
            i++;
        }
        swap(tem1->val, tem2->val);
        return head;
    }
};