#include "add_two_numbers.hpp"

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    if (l1 == NULL && l2 == NULL)
    {
        return NULL;
    }

    struct ListNode *result;
    struct ListNode *next1 = NULL;
    struct ListNode *next2 = NULL;

    int sumRes = 0;
    if (l1 != NULL)
    {
        sumRes += l1->val;
        result = l1;
        next1 = l1->next;
    }
    if (l2 != NULL)
    {
        sumRes += l2->val;
        result = l2;
        next2 = l2->next;
    }

    result->val = sumRes % 10;
    if (sumRes >= 10)
    {
        if (next1 == NULL && next2 == NULL)
        {
            result->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            result->next->next = NULL;
            result->next->val = 1;
            return result;
        }
        else

            if (next1 != NULL)
        {
            ++(next1->val);
        }
        else // next2 != NULL
        {
            ++(next2->val);
        }
    }
    result->next = addTwoNumbers(next1, next2);

    return result;
}