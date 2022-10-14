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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *p=head,*q=head;
        int cnt=0;
        while(p){
            cnt++;
            p=p->next;
        }
        int tmp=cnt/2;
        if(cnt==1){
            return NULL;
        }
        for(int i=0;i<tmp-1;i++){
            q=q->next;
        }
        q->next=q->next->next;
        return head;
    }
};