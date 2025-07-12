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
        if(head == NULL)
        return head;
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i=1; i<=n; i++){
            if(fast)
            fast = fast->next;
        }
        if(fast == NULL){
            ListNode* deleteNode = head;
            head = head->next;
            delete deleteNode;
            return head;
        }
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* deleteNode = slow->next;
        slow->next = slow->next->next;
        delete deleteNode;
        return head;
    }
};