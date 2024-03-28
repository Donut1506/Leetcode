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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        
        ListNode* slowPtr = dummyHead;
        ListNode* fastPtr = dummyHead;
        
        for (int i = 0; i <= n; ++i) {
            fastPtr = fastPtr->next;
        }
        
        while (fastPtr != nullptr) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next;
        }
        
        ListNode* temp = slowPtr->next;
        slowPtr->next = slowPtr->next->next;
        delete temp;
        
        return dummyHead->next;
    }
};