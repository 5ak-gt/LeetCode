// 0 ms | 19.4 MB
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(a == NULL)
        return b;

        if(b == NULL)
        return a;

        if(a->val < b->val) {
          a->next = mergeTwoLists(a->next, b);
          return a;
        }
        else {
            b->next = mergeTwoLists(a, b->next);
            return b;
        }
    }
};