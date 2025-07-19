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
        if(cnt1 > cnt2){
            diff = cnt1 - cnt2;
            while(diff){
                diff--;
                temp1 = temp1->next;
            }
        }else{
            diff = cnt2 - cnt1;
            while(diff){
                diff--;
                temp2 = temp2->next;
            }
        }
        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};