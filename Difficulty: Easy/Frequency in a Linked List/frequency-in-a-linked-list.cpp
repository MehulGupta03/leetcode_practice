/* Structure of a linked list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int count(Node* head, int key) {
        Node* temp = head;
        if(head==NULL){
            return NULL;
        }
        int count = 0;
        while(temp!=NULL){
            if(temp->data == key){
                count++;
            }
            temp = temp->next;
        }
        return count;
    }
};