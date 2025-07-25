/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertCopyNode(Node* head){
        Node* temp = head;
        while(temp){
            Node* copy = new Node(temp->val);
            Node* next = temp->next;
            temp->next = copy;
            copy->next = next;
            temp = temp->next->next;
        }
    }

    void connectRandomPointer(Node* head){
        Node* temp = head;
        while(temp){
            Node* copy = temp->next;
            if(temp->random){
                copy->random = temp->random->next;
            }else{
                copy->random = NULL;
            }
            temp = temp->next->next;
        }
    }

    Node* connectNextPointer(Node* head){
        if(!head || !head->next)
        return head;
        Node* temp = head;
        Node* dummy = new Node(-1);
        Node* res = dummy;
        while(temp){
            Node* copy = temp->next;
            res->next = copy;
            res = res->next;
            temp->next = temp->next->next;
            temp = temp->next;
        }
        return dummy->next;
    }

    Node* copyRandomList(Node* head) {
        insertCopyNode(head);
        connectRandomPointer(head);
        return connectNextPointer(head);
    }
};