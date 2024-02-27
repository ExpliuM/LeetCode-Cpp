#include "add_two_numbers.hpp"

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    if (l1 == nullptr && l2 == nullptr)
    {
        return nullptr;
    }

    struct ListNode *result;
    struct ListNode *next1 = nullptr;
    struct ListNode *next2 = nullptr;

    int sumRes = 0;
    if (l1 != nullptr)
    {
        sumRes += l1->val;
        result = l1;
        next1 = l1->next;
    }
    if (l2 != nullptr)
    {
        sumRes += l2->val;
        result = l2;
        next2 = l2->next;
    }

    result->val = sumRes % 10;
    if (sumRes >= 10)
    {
        if (next1 == nullptr && next2 == nullptr)
        {
            result->next = new ListNode();
            result->next->next = nullptr;
            result->next->val = 1;
            return result;
        }
        else if (next1 != nullptr)
        {
            ++(next1->val);
        }
        else // next2 != nullptr
        {
            ++(next2->val);
        }
    }
    result->next = addTwoNumbers(next1, next2);

    return result;
}
