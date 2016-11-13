/**
 * Defition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode head(-1); // dummy node
        int carry = 0;
        ListNode *prev = &head;
        ListNode *pa = l1;
        ListNode *pb = l2;
        while (pa != NULL || pb != NULL) {
            const int ai = pa == NULL? 0: pa->val;
            const int bi = pb == NULL? 0: pb->val;
            const int value = (ai+bi+carry)%10;
            carry = (ai+bi+carry)/10;
            prev->next = new ListNode(value);
            if (pa != NULL) pa = pa->next;
            if (pb != NULL) pb = pb->next;
            prev= prev->next;
        }
        if (carry>0)
            prev->next = new ListNode(carry);
        
        return head.next;
    }
};
