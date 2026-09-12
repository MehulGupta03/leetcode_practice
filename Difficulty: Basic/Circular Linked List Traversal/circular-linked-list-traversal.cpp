/* Structure of circular linked list node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    void printList(Node* head) {
        // code here
        Node* temp = head;
        if(head==NULL){
            return ;
        }
        do{
            cout << temp->data << " ";
            temp = temp->next;
        }while(temp!=head);
    }
};