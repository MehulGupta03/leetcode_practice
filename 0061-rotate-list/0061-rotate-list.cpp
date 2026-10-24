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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        int size=0;
        ListNode* temp = head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        k = k % size; 
        if(k == 0){ 
            return head;
        }
        temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        ListNode* last = temp;
        ListNode* curr = head;
        while(k--){
            last->next = head;
            head = last;
            temp = head; 
            while(temp->next != last){ 
                temp = temp->next; 
            } 
                temp->next = NULL; 
                last = temp; 
        }
        return head;
    }    
};