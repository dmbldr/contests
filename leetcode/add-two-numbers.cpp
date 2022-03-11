class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        auto cur = head;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr)
        {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int d = x + y + carry;
            carry = d / 10;
            cur->next = new ListNode(d % 10);
            cur = cur->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(carry == 1)
        {
            cur->next = new ListNode(1);
        }
        
        return head->next;
    }
};
