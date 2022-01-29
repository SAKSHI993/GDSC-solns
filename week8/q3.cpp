class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int l=0,k=1;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        //cout<<l;
        temp=head;
        if(l==n){
            return head->next;
        }
       
        else{
       temp=head;
        while(temp!=NULL&&k<l-n){
            temp=temp->next;
            k++;
        }
         
            temp->next=temp->next->next;
        }
        return head;
    }
};
