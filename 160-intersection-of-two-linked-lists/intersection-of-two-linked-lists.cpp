// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         if(headA==nullptr && headB==nullptr){
//             return 0;
//         }
//         vector<ListNode*>A;
//         while(headA!=nullptr){
//              A.push_back(headA);
//              headA->next;
//         }
//         vector<ListNode*>B;
//         while(headB!=nullptr){
//              B.push_back(headB);
//              headB->next;
//         }
//         for(int i=0;i<A.size();i++){
//             for(int j=0;j<B.size();j++){
//                 if(A[i]==B[j]){
//                     return A[i];
//                 }
//             }
//         }
//         return 0;
//     }
// };



// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         while(headA==nullptr || headB==nullptr){
//             return 0;
//         }
//         while(headA){
//             ListNode* temp=headB;
//             while(temp){
//                 if(temp==headA){
//                     return headA;
//                 }
//                 temp=temp->next;
//             }
//             headA=headA->next;
//         }
//       return 0;
//     }
// };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int len1=0,len2=0;
    ListNode *temp1=headA;
    ListNode *temp2=headB;
    
    while(temp1){
        len1++;
        temp1=temp1->next;
    }
    while(temp2){
        len2++;
        temp2=temp2->next;
    }
    int diff=len1-len2;
    if(diff<0){
        while((diff++) !=0)headB=headB->next;
    }
    else{
        while((diff--)!=0)headA=headA->next;
    }
    while(headA!=nullptr && headB!=nullptr){
        if(headA==headB){
            return headA;
        }
        headA=headA->next;
        headB=headB->next;
    }
    return headA;
    }
};