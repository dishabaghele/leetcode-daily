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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }
        if(len == 1) return nullptr;
        int pos = len - n ;
        if(pos == 0) return head->next;
        temp = head;
        while(pos > 1){
            temp = temp->next;
            pos--;
        }
        if(temp->next->next){
            temp->next = temp->next->next;
        }else{
            temp->next = nullptr;
        }
        return head;
    }
};