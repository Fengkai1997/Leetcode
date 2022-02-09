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
    ListNode* swapPairs(ListNode* head) {
    ListNode* dummy_head = new ListNode(0);
    dummy_head -> next = head;
    ListNode *cur = dummy_head;
    while(cur->next!=nullptr && cur->next->next!=nullptr){
        ListNode*tmp1=cur->next;
        ListNode*tem2=cur->next->next->next;
        cur->next = cur->next->next;
        cur->next->next=tmp1;
        cur->next->next->next=tem2;
        cur = cur->next->next;

    }
    return dummy_head->next;
    
    }
};
