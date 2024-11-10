#include <vector>
#include <iostream>

#include "list_node.hpp"

using namespace std;

bool compareListNodes(ListNode *list1, ListNode *list2)
{
  while (true)
  {
    if (list1 == nullptr && list2 == nullptr)
    {
      return true;
    }

    if (list1 == nullptr)
    {
      return false;
    }

    if (list2 == nullptr)
    {
      return false;
    }

    if (list1->val != list2->val)
    {
      return false;
    }

    //list1->value == list2->value
    list1 = list1->next;
    list2 = list2->next;
  }
}

int getValue(ListNode *listNode)
{
  int value = listNode->val;
  while (listNode->next != nullptr)
  {
    listNode = listNode->next;

    value = value * 10 + listNode->val;
    /* code */
  }
  return value;
}

ListNode *allocateListNodeFromVector(vector<int> &vector)
{
  ListNode *newList = new ListNode();
  ListNode *newListIterator = newList;

  for (auto vectorIterator = vector.begin(); vectorIterator != vector.end();)
  {
    newListIterator->val = *vectorIterator;
    ++vectorIterator;
    if (vectorIterator != vector.end())
    {
      newListIterator->next = new ListNode();
      newListIterator = newListIterator->next;
    }
  }

  return newList;
}

void destroyList(ListNode *current)
{
  ListNode *next = current;
  while (next != nullptr)
  {
    next = next->next;
    delete current;
    current = next;
  }
}
