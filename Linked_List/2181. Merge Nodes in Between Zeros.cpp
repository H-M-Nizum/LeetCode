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
    void reverse(ListNode *&head, ListNode *cur){
        if (cur->next == NULL){
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    void insert_head(ListNode *&head, int val){
        ListNode *newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newhead = NULL;
        ListNode* tem = head;
        int sum = 0;
        while(tem != NULL){
            if(tem->val == 0){
                if(sum > 0)
                    insert_head(newhead, sum);
                sum = 0;
            }
            else{
                sum += tem->val;
            }
            tem = tem->next;
        }
        reverse(newhead, newhead);
        return newhead;
    }
};