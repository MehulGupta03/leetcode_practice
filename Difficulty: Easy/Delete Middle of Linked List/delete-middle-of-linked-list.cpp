/* Node Structure
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* deleteMid(Node* head) {
        Node* temp = head;
        if(head == NULL || head->next==NULL){
            return NULL;
        }
        int count = 1;
        while(temp->next!=NULL){
            temp = temp->next;
            count++;
        }
        int mid = count/2;
        temp = head;
        for(int i=0;i<mid-1;i++){
           temp = temp->next; 
        }
        Node* todelete = temp->next;
        temp->next = todelete->next;
        delete todelete;
        return head;
    }
};