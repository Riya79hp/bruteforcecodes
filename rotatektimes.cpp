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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==nullptr || head->next==nullptr){
            return head;
        }

for(int i=k;i>0;i--){
ListNode *t=head;
ListNode *c=head;
int length=0;
while (t->next->next && t!=nullptr && t->next->next!=nullptr ) {
        t = t->next;
       
    }
ListNode *y;
y=new ListNode;
y->val=t->next->val;
y->next=head;
head=y;
 delete t->next;
    t->next = nullptr;

}






    return head;}
};
