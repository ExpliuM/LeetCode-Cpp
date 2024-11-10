/*
 * Link: https://leetcode.com/problems/add-two-numbers/
 */

#ifndef LIST_NODE_H
#define LIST_NODE_H

#include <vector>

struct ListNode
{
public:
  ListNode(int value = 0, ListNode *next = nullptr)
  {
    this->next = next;
    this->val = value;
  }
  int val;
  ListNode *next;
};


bool compareListNodes(ListNode *list1, ListNode *list2);
int getValue(ListNode *listNode);
ListNode *allocateListNodeFromVector(std::vector<int> &vector);
void destroyList(ListNode *listNode);

#endif // LIST_NODE_H
