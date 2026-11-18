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
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
        {
            int carry = 0;
            ListNode dummy(0);
            ListNode *head = &dummy;
            while (l1 != nullptr || l2 != nullptr || carry)
            {
                int ans = carry;
                if (l1 != nullptr)
                {
                    ans += l1->val;
                    l1 = l1->next;
                }
                if (l2 != nullptr)
                {
                    ans += l2->val;
                    l2 = l2->next;
                }
                carry = ans / 10;
                head->next = new ListNode(ans % 10);
                head = head->next;
            }
            return dummy.next;
        }
};