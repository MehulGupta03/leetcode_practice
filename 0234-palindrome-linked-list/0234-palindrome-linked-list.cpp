class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return true;
        }

        // Make a copy of the complete linked list
        ListNode* me = new ListNode(head->val);
        ListNode* copy = me;
        ListNode* temp = head->next;

        while (temp != NULL) {
            copy->next = new ListNode(temp->val);
            copy = copy->next;
            temp = temp->next;
        }

        // Reverse the original linked list
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forw = NULL;

        while (curr != NULL) {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }

        // Compare copied list with reversed list
        ListNode* p1 = me;
        ListNode* p2 = prev;

        while (p1 != NULL && p2 != NULL) {
            if (p1->val != p2->val) {
                return false;
            }

            p1 = p1->next;
            p2 = p2->next;
        }

        return true;
    }
};