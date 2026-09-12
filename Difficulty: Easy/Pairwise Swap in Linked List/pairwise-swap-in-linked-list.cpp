/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* pairwiseSwap(Node* head) {
        // The task is to complete this method
        Node* temp = head;
        if(head == NULL || head->next==NULL){
            return head;
        }
        while(temp!=NULL && temp->next!=NULL){
            swap(temp->data, temp->next->data);
            temp = temp->next->next;
        }
        return head;
    }
};