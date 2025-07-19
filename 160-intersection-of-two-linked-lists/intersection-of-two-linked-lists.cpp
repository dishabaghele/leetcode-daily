/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int cnt1 = 0;
        int cnt2 = 0;
        while(temp1){
            cnt1++;
            temp1 = temp1->next;
        }
        while(temp2){
            cnt2++;
            temp2 = temp2->next;
        }
        int diff;
        temp1 = headA;
        temp2 = headB;
        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
            if(temp1==temp2)
            return temp1;
            if(temp1 == NULL){
                temp1 = headB;
            }
            if(temp2 == NULL){
                temp2 = headA;
            }
        }
        return temp1;
    }
};