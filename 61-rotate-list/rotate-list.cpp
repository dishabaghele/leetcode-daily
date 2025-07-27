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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
        return head;
        ListNode* temp = head;
        int len = 1;
        while(temp->next){
            temp = temp->next;
            len++;
        }
        k = k%len;
        int pos = len - k;
        pos--;
        if(k == 0)
        return head;
        temp->next = head;
        temp = head;
        while(temp && pos){
            pos--;
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};