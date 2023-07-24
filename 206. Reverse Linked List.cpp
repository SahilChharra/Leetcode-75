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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev,*cur;
        if(head!=NULL){
            prev=head;
            cur=head->next;
            head=head->next;

            prev->next = NULL;

            while(head!=NULL){
                head = head->next;
                cur->next = prev;
                prev = cur;
                cur = head;
            }
        }
        head=prev;

        return head;
    }
};