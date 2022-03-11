class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto slow = head;
        auto fast = head;
        for(int i = 0; i < n; ++i)
        {
            fast = fast->next;
        }
        if(fast == nullptr)
        {
            return slow->next;
        }
        while(fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        
        return head;
    }
};
