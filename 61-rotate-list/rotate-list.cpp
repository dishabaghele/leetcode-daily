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
    ListNode* getLastNode(ListNode* head, int k){
        ListNode* temp = head;
        int cnt = 0;
        while(temp){
            cnt++;
            if(k == cnt)
            return temp;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
        return head;
        int len  = 1;
        ListNode* tail = head;
        ListNode* temp = head;
        while(tail->next){
            len++;
            tail = tail->next;
        }
        if(k%len == 0)
        return head;
        k = k%len;
        tail->next = head;
        ListNode* lastNode = getLastNode(temp, len-k);
        head = lastNode->next;
        lastNode->next = NULL;
        return head;  
    }
};