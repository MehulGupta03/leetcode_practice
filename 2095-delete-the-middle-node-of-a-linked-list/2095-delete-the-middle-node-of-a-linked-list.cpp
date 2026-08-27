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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return NULL;
        }
        ListNode* h = head;
        int count = 0;
        while(h!=NULL){
            h=h->next;
            count++;
        }
        int mid = count/2;
        h=head;
        for(int i=0;i<mid-1;i++){
            h=h->next;
        }
        ListNode* temp = h->next;
        h->next = temp->next;
        delete temp;
        return head;

    }
};