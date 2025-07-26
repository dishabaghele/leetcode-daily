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
    ListNode* findKthNode(ListNode* head, int k){
        ListNode* temp = head;
        k--;
        while(temp && k>0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
    void reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp){
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp){
            ListNode* kthNode = findKthNode(temp, k);
            if(kthNode == NULL){
                if(prev)
                prev->next = temp;
                return head;
            }
            ListNode* next = kthNode->next;
            kthNode->next = NULL;
            reverse(temp);
            if(temp == head){
                head = kthNode;
            }else{
                prev->next = kthNode;
            }
            prev = temp;
            temp = next;
        }
        return head;
    }
};