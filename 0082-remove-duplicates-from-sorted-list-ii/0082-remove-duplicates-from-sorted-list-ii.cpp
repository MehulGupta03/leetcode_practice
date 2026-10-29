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
            temp = temp->next;
        }
        vector<int> arr;
        for(int i=0;i<ans.size();i++){
            int count=0;
            for(int j=0;j<ans.size();j++){
                if(ans[i]==ans[j]){
                    count++;
                }
            }
            if(count==1){
                arr.push_back(ans[i]);
            }
        }
        if(arr.empty()){
            return NULL;
        }
        ListNode* newhead = new ListNode(arr[0]);
        ListNode* temp1 = newhead;
        for (int i = 1; i < arr.size(); i++) {
            ListNode* newNode = new ListNode(arr[i]);
            temp1->next = newNode;
            temp1 = newNode;
        }
        return newhead;
    }
};