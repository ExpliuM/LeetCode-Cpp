#include <vector>
#include <iostream>

#include "merge_two_lists.hpp"

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == nullptr)
    {
        return list2;
    }

    if (list2 == nullptr)
    {
        return list1;
    }

    ListNode *firstNode;
    ListNode *currentNode;
    if (list1->val < list2->val)
    {
        firstNode = list1;
        list1 = list1->next;
    }
    else
    {
        firstNode = list2;
        list2 = list2->next;
    }
    currentNode = firstNode;

    while (list1 != nullptr || list2 != nullptr)
    {
        if (list1 == nullptr)
        {
            currentNode->next = list2;
            break;
        }

        if (list2 == nullptr)
        {
            currentNode->next = list1;
            break;
        }

        ListNode *tmp;
        if (list1->val < list2->val)
        {
            currentNode->next = list1;
            list1 = list1->next;
        }
        else
        {
            currentNode->next = list2;
            list2 = list2->next;
        }

        currentNode = currentNode->next;
    }

    return firstNode;
}

/*
Recursive version, also works
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == nullptr)
    {
        return list2;
    }

    if (list2 == nullptr)
    {
        return list1;
    }

    if (list1->value < list2->value)
    {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }

    list2->next = mergeTwoLists(list1, list2->next);
    return list2;
}
*/