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
//     ListNode* sorted(ListNode* head1, ListNode* head2) 
//  {      
//         if (head1==NULL) return head2;
//         if (head2==NULL) return head1;
//         if (head1->val < head2->val) 
//         {
//             head1->next = sorted(head1->next, head2);
//             return head1;
//         } 
//         else 
//         {
//             head2->next = sorted(head1, head2->next);
//             return head2;
//         }
//     }
//     ListNode* mergeKLists(vector<ListNode*>& arr) {
//         if(arr.empty()) return nullptr;
//         ListNode* res = nullptr;
//         for (ListNode* temp : arr) 
//         { 
//             res = sorted(res, temp); 
//         }
//         return res;
//     }
// };





class Solution {
public:
    ListNode* sorted(ListNode* head1, ListNode* head2) 
    {  
        if(head1==nullptr)return head2;
        if(head2==nullptr)return head1;
        if(head1->val<head2->val){
            head1->next=sorted(head1->next,head2);
            return head1;
        }
        else{
            head2->next=sorted(head1,head2->next);
            return head2;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
    if(arr.size()==0){
        return nullptr;
    }
    ListNode* res=nullptr;
    for(ListNode* temp:arr){
        res=sorted(res,temp);
    }
    return res;
    }
};