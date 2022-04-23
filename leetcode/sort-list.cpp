class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        auto mid = getMid(head);
        auto left = sortList(head);
        auto right = sortList(mid);
        return merge(left, right);
    }
    
    ListNode* merge(ListNode* p, ListNode* q)
    {
        ListNode head(0);
        auto cur = &head;
        while(p != nullptr && q != nullptr)
        {
            if(p->val < q->val)
            {
                cur->next = p;
                p = p->next;
            }
            else
            {
                cur->next = q;
                q = q->next;
            }
            cur = cur->next;
        }
        cur->next = (p == nullptr) ? q : p;
        return head.next;
    }
    
    
    ListNode* getMid(ListNode* head)
    {
        ListNode* mid = nullptr;
        auto slow = mid;
        auto fast = head;
        while(fast != nullptr && fast->next != nullptr)
        {
            slow = (slow == nullptr) ? head : slow->next;
            fast = fast->next->next;
        }
        mid = slow->next;
        slow->next = nullptr;
        return mid;
    }
};
