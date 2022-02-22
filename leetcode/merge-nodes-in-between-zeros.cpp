class Solution {
public:
    ListNode* mergeNodes(ListNode* head)
    {
        head = head->next;
        auto modify = head;
        auto cur = head;
        while(modify != nullptr)
        {
            cur = cur->next;
            if(cur->val == 0)
            {
                modify->next = cur->next;
                modify = cur->next;
                cur = cur->next;
            }
            else
            {
                modify->val += cur->val;
            }
        }

        return head;
    }
};
