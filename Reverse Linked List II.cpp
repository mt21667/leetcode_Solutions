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
ListNode* reverse(ListNode* head){
    ListNode* curr=head;
    ListNode* prev=NULL;
    ListNode* next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
            return head;
        ListNode* start=NULL,*start_prev=NULL;//this start is the starting point of the list need to be reversed
        ListNode* end=NULL,*end_next=NULL;
        ListNode* curr=head;
        for(int i=1;i<=right && curr;i++){
            if(i<left)
                start_prev=curr;
            if(i==left)
                start=curr;
            if(i==right){
                end=curr;
                end_next=curr->next;
            }
            curr=curr->next;
        }
        end->next=NULL;//This end is storing the head of the reversed linked list
        end=reverse(start);
        if(start_prev)
            start_prev->next=end;
        else
            head=end;
        start->next=end_next;
        return head;
    }
};
