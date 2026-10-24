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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        if(head==NULL||head->next==NULL){
            return temp;
        }
        ListNode* curr = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        for(int i=0;i<2;i++){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head->next = swapPairs(curr);
        return prev;
    }
};