class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        auto slow = head;
        auto fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) return true;
        }
        return false;
    }
}; // O(1) memory and O(n) time