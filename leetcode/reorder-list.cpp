class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> pointers;
        auto cur = head;
        while(cur != nullptr)
        {
            pointers.push_back(cur);
            cur = cur->next;
        }
        
        int l = 0;
        int r = pointers.size() - 1;
        
        while(l < r)
        {
            pointers[l]->next = pointers[r];
            ++l;
            if(l == r) pointers[r]->next = nullptr;
            else pointers[r]->next = pointers[l];
            --r;
        }
        if(l == r) pointers[r]->next = nullptr;
    }
};
