/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)  // List Doesnt Exist
        {   
            return NULL;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* ptr1 = head;
        ListNode* ptr2 = NULL;

        // first of all we find the list is forming any loop or not
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow == fast)  // loop exist
            {
               ptr2=slow;
               break;
            }
        }
        if(ptr2==NULL)  return NULL;  // loop does not exist .
        // loop exist 
        while(ptr1!=ptr2){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }

        return ptr2;
    }
};