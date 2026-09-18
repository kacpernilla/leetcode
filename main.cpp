#include <bits/stdc++.h>

using namespace std;

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

ListNode* convertArrToLinkedList(vector<int>& arr){
    ListNode* dummyNode = new ListNode(-1);
    ListNode* temp = dummyNode;
    for(int i = 0; i < arr.size(); i++){
        temp->next = new ListNode(arr[i]); 
        temp = temp->next; 
    }
    return dummyNode->next; 
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> values;
        ListNode *t1 = list1;
        ListNode *t2 = list2;

        while(t1 != NULL){
            values.push_back(t1->val);
            t1 = t1->next;
        }

        while(t2 != NULL){
            values.push_back(t2->val);
            t2 = t2->next;
        }

        sort(values.begin(), values.end());

        ListNode *head = convertArrToLinkedList(values);

        return head;
    }

};

int main(void) { }
