class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != nullptr && head->val == val)
        {
            head = head->next;
        }

        ListNode* prev = nullptr;
        auto cur = head;

        while(cur != nullptr)
        {
            if(cur->val == val)
            {
                prev->next = cur->next;
            }
            else
            {
                prev = cur;
            }
            cur = cur->next;
        }

        return head;
    }
};