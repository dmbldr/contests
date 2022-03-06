class Solution {
public:
    bool isPalindrome(ListNode* head) {
        auto slow = head;
        auto fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        auto second = reverseList(slow->next);
        auto first = head;
        while(second != nullptr)
        {
            if(second->val != first->val) return false;
            first = first->next;
            second = second->next;
        }

        return true;
    }

    ListNode* reverseList(ListNode* head)
    {
        ListNode* pre = nullptr;
        ListNode* nxt = nullptr;
        while(head != nullptr)
        {
            nxt = head->next;
            head->next = pre;
            pre = head;
            head = nxt;
        }
        return pre;
    }
};