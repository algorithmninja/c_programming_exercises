//
// Created by john on 1/22/21.
//

#include <stdio.h>

/**
 * Input: l1 = [2,4,3], l2 = [5,6,4]
 * Output: [7,0,8]
 * Explanation: 342 + 465 = 807
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
    int val;
    struct ListNode *next;
    };

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode * pRt = (struct ListNode *)malloc(sizeof(struct ListNode));
    pRt->next = NULL;
    struct ListNode * pL;
    pL = pRt;
    int sum = 0;
    while (l1 || l2 || sum){
        if (l1){
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2){
            sum += l2->val;
            l2 = l2->next;
        }
        struct ListNode * pTmp = (struct ListNode *)malloc(sizeof(struct ListNode));
        pTmp->val = sum % 10;
        pTmp->next = NULL;
        pL->next = pTmp;
        pL = pL->next;
        sum = sum / 10;
    }
    pRt = pRt->next;
    return pRt;
}

int main(int argc, char *argv[]){

    return 0;
}