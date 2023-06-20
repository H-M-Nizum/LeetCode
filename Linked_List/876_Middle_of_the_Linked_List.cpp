// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
class Solution {
public:
    int size(ListNode* head){
        ListNode* tem = head;
        int cont = 0;
        while(tem != NULL){
            cont++;
            tem = tem->next;
        }
        return cont;
    }
    ListNode* middleNode(ListNode* head) {
        int n = size(head);
        ListNode* tem = head;
        for(int i=0; i<n/2; i++){
            tem = tem->next;
        }
        return tem;
    }
};



//#########################################################
//Fast and slow algorithms or Hare and tortoise algorithms.
//#########################################################

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};