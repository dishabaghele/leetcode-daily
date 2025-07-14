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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        ListNode* newHead = NULL;
        ListNode* temp = newHead;
        while(l1 || l2){
            int digit = (l1)?l1->val + carry:l2->val + carry;
            if(l1 && l2){
                digit = l1->val + l2->val + carry;
            }
            carry = 0;
            if(digit > 9){
                carry = digit/10;
                digit = digit%10;
            }
            if(newHead == NULL){
                newHead = new ListNode(digit, NULL);
                temp = newHead;
            }else{
                temp->next = new ListNode(digit, NULL);
                temp = temp->next;
            } 
            if(l1)
            l1 = l1->next;
            if(l2)
            l2 = l2->next;
        }
        if(carry != 0){
            temp->next = new ListNode(carry, NULL);
        }
        return newHead;
    }
};