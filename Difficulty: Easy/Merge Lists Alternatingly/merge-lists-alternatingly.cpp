/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    vector<Node *> mergeList(Node *head1, Node *head2) {
        // code Here
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1 != NULL && temp2 != NULL){
            Node* next1 = temp1->next;
            Node* next2 = temp2->next;
            temp1->next = temp2;
            temp2->next = next1;
            temp1 = next1;
            temp2 = next2;
        }
        return {head1, temp2};
        
    }
};