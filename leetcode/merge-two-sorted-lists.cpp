class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        if(list1->val < list2->val)
        {
            head = list1;
            list1 = list1->next;
        }
        else
        {
            head = list2;
            list2 = list2->next;
        }

        auto cur = head;
        while(list1 != nullptr && list2 != nullptr)
        {
            if(list1->val < list2->val)
            {
                cur->next = list1;
                list1 = list1->next;
            }
            else
            {
                cur->next = list2;
                list2 = list2->next;
            }
            cur = cur->next;
        }

        if (list1 != nullptr)
        {
            cur->next = list1;
        }
        if (list2 != nullptr)
        {
            cur->next = list2;
        }

        return head;
    }
};
