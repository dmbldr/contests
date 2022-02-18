class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        auto slow = head;
        auto fast = head;
        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
