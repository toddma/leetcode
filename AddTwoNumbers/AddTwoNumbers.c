/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummyHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* curr = dummyHead;
    struct ListNode* p = l1;
    struct ListNode* q = l2;
    int carry = 0;
    while(p!= NULL || q != NULL){
        int x = (p!=NULL)?p->val:0;
        int y = (q!=NULL)?q->val:0;
        int sum = x + y + carry;
        carry = sum / 10;
        curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr = curr->next;
        curr->val = sum % 10;
        if (p != NULL) p = p->next;
        if (q != NULL ) q = q->next;
    }
    if(carry > 0){
        curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr = curr->next;
        curr->val = carry;
    }
    curr->next = NULL;
    return dummyHead->next;
}
