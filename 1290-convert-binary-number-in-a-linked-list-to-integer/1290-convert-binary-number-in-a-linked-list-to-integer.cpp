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
    int getDecimalValue(ListNode* head) {
        string ans="";
        int size=0;
        ListNode* temp = head;
        while(temp!=NULL){
            size++;
            ans.push_back(temp->val+'0');
            temp=temp->next;
        }
        return std::stoul(ans, nullptr, 2);
        // int res = int(ans);
        // return res;
    }
};