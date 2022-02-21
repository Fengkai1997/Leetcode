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
    ListNode* insertionSortList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode * dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* lastsort = head;
        ListNode* cur = head->next;
        while(cur!=nullptr){
            if(lastsort->val <= cur->val){
                lastsort=lastsort->next;
                
            }
            
            else{
                ListNode*pre=dummyhead;
                while(pre->next->val <= cur->val){
                    pre = pre->next;
                }
                lastsort->next = cur->next;
                cur->next = pre->next;
                pre->next = cur;
            }
            cur=lastsort->next;
        }
    return dummyhead->next;
    }

};
