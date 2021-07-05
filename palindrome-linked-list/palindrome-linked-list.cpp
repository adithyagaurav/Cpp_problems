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
    ListNode* reverseList(ListNode* head){
        ListNode* curr = NULL;
        ListNode* prev = NULL;
        ListNode* temp = NULL;
        int count=0;
        curr = head;
        while(curr!=NULL){
            // cout<<curr->val<<" ";
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* p1 = head;
        ListNode* p2 = head;
        int count=0;
        while(p1!=NULL){
            p1 = p1->next;
            count++;
        }
        for(int i=0;i<count/2;i++){
            p2 = p2->next;
        }
        if(count%2!=0)
            p2 = p2->next;
        p2 = reverseList(p2);
        p1 = head;
        for(int i=0;i<count/2;i++){
            if(p1->val != p2->val)
                return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};