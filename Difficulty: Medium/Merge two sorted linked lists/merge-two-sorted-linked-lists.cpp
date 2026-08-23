/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
    struct Node* dummy = new Node(0);
    struct Node* temp = dummy;
    while(head1 && head2){
        if(head1->data < head2->data){
            temp->next=head1;
            head1=head1->next;
        }
        else{
            temp->next=head2;
            head2=head2->next;
        }
        temp=temp->next;
    }
    if(head1) temp->next=head1;
    if(head2) temp->next=head2;
    return dummy->next;
    }
};