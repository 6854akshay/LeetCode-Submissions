/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
    public:
        ListNode* oddEvenList(ListNode* head)
        {
            if (head == nullptr || head->next == nullptr)
                return head;
            
            ListNode oddd(0), evend(0);
            ListNode *odd = &oddd, *even = &evend;
            int i = 1;
            while (head != nullptr)
            {
                if (i % 2)
                {
                    odd->next = head;
                    odd = odd->next;
                }
                else
                {
                    even->next = head;
                    even = even->next;
                }
                head = head->next;
                i++;
            }
            even->next = nullptr;
            odd->next = evend.next;
            return oddd.next;
        }
};