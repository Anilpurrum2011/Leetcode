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
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* temp= new ListNode(0);
//         ListNode* current =temp;
//         while(list1&&list2){
//             if(list1->val > list2->val){
//                 current->next=list2;
//                 list2=list2->next;
//             }
//             else{
//                 current->next=list1;
//                 list1=list1->next;
//             }
//             current=current->next;
//         }
//         current->next=list1? list1:list2;
//         return temp->next;
//     }
// };




// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* dummy=new ListNode(0);
//         ListNode* temp=dummy;
//         while(list1!=nullptr && list2!=nullptr){
//             if(list1->val<=list2->val){
//                 temp->next=list1;
//                 list1=list1->next;
//             }
//             else{
//                 temp->next=list2;
//                 list2=list2->next;
//             }
//             temp=temp->next;
//         }
//         if(list1==nullptr){
//             temp->next=list2;
//         }
//         else{
//             temp->next=list1;
//         }
//         return dummy->next;
//     }
// };


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode* dummy=new ListNode(0);
      ListNode* temp=dummy;
      while(list1!=nullptr && list2!=nullptr){
        if(list1->val<list2->val){
            temp->next=list1;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            list2=list2->next;
        }
        temp=temp->next;
      }
      if(list1==nullptr){
        temp->next=list2;
      }
      else{
        temp->next=list1;
      }
      return dummy->next;
    }
};

