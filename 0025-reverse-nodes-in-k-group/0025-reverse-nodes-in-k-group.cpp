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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        int size=0;
        ListNode* temp = head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        if(size<k){
            return head;
        }
        ListNode* curr = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        for(int i=0;i<k;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode* dummy = prev;
        head->next = reverseKGroup(curr, k);
        return dummy;
    }
};