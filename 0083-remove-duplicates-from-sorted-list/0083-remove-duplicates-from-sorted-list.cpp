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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> arr;
        for(int i=0;i<ans.size();i++){
            if(find(arr.begin(),arr.end(), ans[i])!=arr.end()){
                continue;
            }
            else{
                arr.push_back(ans[i]);
            }
        }
        if(arr.empty()){
            return NULL;
        }
        ListNode* newHead = new ListNode(arr[0]);
        ListNode* temp1 = newHead;
        for(int i=1;i<arr.size();i++){
            ListNode* newHead = new ListNode(arr[i]);
            temp1->next=newHead;
            temp1=newHead;
        }
        return newHead;
    }
};