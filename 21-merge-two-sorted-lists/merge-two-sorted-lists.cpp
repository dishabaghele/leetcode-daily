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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode* newList = nullptr;
        if(list1->val < list2->val){
            newList = list1;
            list1 = list1->next;
        }else{
            newList = list2;
            list2 = list2->next;
        }
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* head = newList;
        while(t1 && t2){
            if(t1->val < t2->val){
                newList->next = t1;
                t1 = t1->next;
            }else{
                newList->next = t2;
                t2 = t2->next;
            }
            newList = newList->next;
        }
        if(t1){
            newList->next = t1;
        }else{
            newList->next = t2;
        }
        return head;
    }
};