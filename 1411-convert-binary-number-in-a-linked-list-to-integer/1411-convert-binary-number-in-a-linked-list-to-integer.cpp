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
    int getDecimalValue(ListNode* head) {
        if(head->next == NULL) return head->val;
        ListNode* curr = head;
        int n=0;
        while(curr){
            n++;
            curr = curr->next;
        }
        int decimal=0;
        int i=0;
        while(head){
            decimal += head->val * pow(2, n-i-1);
            i++;
            head = head->next;
        }
        return decimal;
    }
};