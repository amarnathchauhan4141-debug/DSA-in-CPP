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
       /* vector<int>ans; // form a vector to store all the value of list.
        ListNode* temp=head;
        // now store value from list to vector.
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int i=ans.size()-1;
        // Now restore the value from vector to list but in Reverse Order.
        while(temp){
            temp->val=ans[i];
            i--;
            temp=temp->next;
        } 
        // THIS ABOVE CODE WILL ONLY REVERSE THE THE VALUE OF LIST NOT THE ADRESS AND WILL NOT CHANGE DIRECTING OF LINKING.
        */

        // this below code will reverse dalue as well as adress means head will point to last node and linking will reverse.
        ListNode *cur=head,*prev=NULL,*fut=NULL;
        while(cur){
            fut=cur->next;
            cur->next=prev;
            prev=cur;
            cur=fut;
        }
        head=prev;
        return head;
    }
};