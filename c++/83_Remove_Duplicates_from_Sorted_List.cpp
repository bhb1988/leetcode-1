/*************************************************************************
	> File Name: c++/83_Remove_Duplicates_from_Sorted_List.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月14日 星期六 15时49分12秒
 ************************************************************************/

#include<iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;
        
        for (ListNode *prev = head, *cur = head->next; cur; cur = prev->next){
            if (prev->val == cur->val){
                prev->next = cur->next;
                delete cur;
            }
            else{
                prev = cur;
            }
        }
        return head;
    }
};
