
/*
 * Link: https://leetcode.com/problems/merge-two-sorted-lists/description/
 */

#include <filesystem>
#include <fstream>
#include <gtest/gtest.h>

#include "merge_two_lists.hpp"
#include "../utils/list_node.hpp"

using namespace std;

TEST(leetcode, merge_two_lists)
{
    // UC1
    std::vector<int> vector1_1 = {1, 2, 4};
    std::vector<int> vector2_1 = {1, 3, 4};
    std::vector<int> expected_1 = {1, 1, 2, 3, 4, 4};

    ListNode *list1 = allocateListNodeFromVector(vector1_1);
    ListNode *list2 = allocateListNodeFromVector(vector2_1);
    ListNode *expected_list = allocateListNodeFromVector(expected_1);

    ListNode *res = mergeTwoLists(list1, list2);

    EXPECT_TRUE(compareListNodes(res, expected_list));
    destroyList(res);
    destroyList(expected_list);

    // UC2
    res = mergeTwoLists(nullptr, nullptr);
    EXPECT_TRUE(compareListNodes(res, nullptr));

    // UC3
    std::vector<int> vector1_3 = {1};
    std::vector<int> expected_3 = {1};

    list1 = allocateListNodeFromVector(vector1_3);
    expected_list = allocateListNodeFromVector(expected_3);

    res = mergeTwoLists(list1, nullptr);
    EXPECT_TRUE(compareListNodes(res, expected_list));
}