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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* h = head;
        if(head==NULL||head->next==NULL){
            return head;
        }
        int size = 0;
        while(h!=NULL){
            size++;
            h = h->next;
        }
        ListNode* curr = head;
        ListNode* before = NULL;
        for(int i=1;i<left;i++){
            before = curr;
            curr = curr->next;
        }
        ListNode* start = curr;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        for(int i=left;i<=right;i++){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if(before!=NULL){
            before->next=prev;
        }
        else{
            head = prev;
        }
        start->next=curr;
        return head;
    }
};