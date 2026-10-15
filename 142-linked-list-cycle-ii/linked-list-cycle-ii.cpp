class Solution
{
    public:
        ListNode* detectCycle(ListNode *head)
        {
            ListNode* a = head;
            ListNode* b = head;

        while (b != nullptr && b->next != nullptr)
        {
            b = b->next->next;
            a = a->next;
            if (a == b)
            {
                a = head;
                while (a!= b)
                {
                    a = a->next;
                    b = b->next;
                }
                return a;
            }
        }

        return nullptr;        
    }
};