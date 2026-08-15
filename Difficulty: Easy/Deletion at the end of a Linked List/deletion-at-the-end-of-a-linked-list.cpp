/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head == NULL){
            return NULL;
        }
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        Node* temp = head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        Node* temp1 = temp->next;
        temp->next = NULL;
        delete temp1;
        return head;
        
    }
};