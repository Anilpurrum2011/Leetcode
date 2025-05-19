// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* res = new ListNode(0, head);
//         ListNode* dummy = res;
//         for (int i = 0; i < n; i++) {
//             head = head->next;
//         }
//         while (head != nullptr) {
//             head = head->next;
//             dummy = dummy->next;
//         }
//         dummy->next = dummy->next->next;
//         return res->next;        
//     }
// };


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        int a = count - n;
        if (a == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        temp = head;
        for (int i = 0; i < a - 1; i++) {
            temp = temp->next;
        }
        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
        return head;
    }
};
