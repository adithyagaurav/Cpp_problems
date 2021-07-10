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
    ListNode* p3 = new ListNode();
    void insertNode(int val){
        ListNode* new_node = new ListNode(val);
        ListNode* last = p3;
        if(p3==NULL)
            p3 = new_node;
        while(last->next != NULL)
            last = last->next;
        last->next = new_node;
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        while(l1 || l2){
            if(l1 && l2){
                if(l1->val == l2->val){
                    insertNode(l1->val);
                    insertNode(l2->val);
                    l1 = l1->next;
                    l2 = l2->next;
                }
                else if(l1->val < l2->val){
                   insertNode(l1->val);
                    l1 = l1->next;
                }
                else if(l2->val < l1->val){
                   insertNode(l2->val);
                    l2 = l2->next;
                }
            }
            else if(l1 && l2==NULL){
                while(l1){
                    insertNode(l1->val);
                    l1 = l1->next;
                }
            }
            else if(l1==NULL && l2){
                while(l2){
                    insertNode(l2->val);
                    l2= l2->next;
                }
            }
        }
        p3 = p3->next;
        return p3;
    }
};