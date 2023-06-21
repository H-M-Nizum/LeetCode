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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int pos = size(head) - n-1;
        if(pos < 0){
            ListNode* d;
            d = head;
            head = head->next;
            delete d;
            return head;
        }
      
        ListNode* tem = head;
        int i = 0;
        while(i < pos){
            tem = tem->next;
            i++;
        }
        ListNode* d;
        d = tem->next;
        if(tem != NULL && tem->next != NULL){
            tem->next = tem->next->next;
        }
        else
            delete d;
        return head;
    }
};