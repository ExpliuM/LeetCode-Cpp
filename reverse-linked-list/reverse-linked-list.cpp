#include "reverse-linked-list.hpp"

using namespace std;

ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *tmpNext = nullptr;

    if (head == nullptr)
    {
        return nullptr;
    }

    if (head->next == nullptr)
    {
        return head;
    }

    while (head)
    {
        tmpNext = head->next;
        head->next = prev;
        prev = head;
        head = tmpNext;
    }

    return prev;
}