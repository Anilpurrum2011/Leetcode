/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
//  */
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* res=head;
//         while(head && head->next){
//             if(head->val==head->next->val){
//                 head->next=head->next->next;
//             }
//             else{
//                 head=head->next;
//             }
//         }
//         return res;   
//     }
// };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp=head;
    while( temp&& temp->next){
        if(temp->val==temp->next->val){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
    }
};