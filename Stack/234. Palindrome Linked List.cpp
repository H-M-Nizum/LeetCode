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
    void insert_head(ListNode *&head, int val){
        ListNode *newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* newhead = NULL;
        ListNode* tem = head;
        while(tem != NULL){
            insert_head(newhead, tem->val);
            tem = tem->next;
        }
        ListNode* tem1 = head;
        ListNode* tem2 = newhead;
        while(tem1 != NULL){
            if(tem1->val != tem2->val) 
                return false;
            tem1 = tem1->next;
            tem2 = tem2->next;
        }
        return true;

    }
};