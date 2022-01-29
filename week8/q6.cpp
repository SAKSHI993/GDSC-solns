class Solution {
public:
    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        ListNode* ptr1;
        ListNode* ptr2;
       long int l1,l2,diff;
        l1=findlength(headA);
        l2=findlength(headB);
        if(l1>l2){
            ptr1=headA;
            ptr2=headB;
            diff=l1-l2;
        }
        else
        {
            ptr1=headB;
            ptr2=headA;
            diff=l2-l1;
        }
        while(diff){
           
            ptr1=ptr1->next;
            diff--;
        }
      
        while(ptr1!=NULL&&ptr2!=NULL){
        if(ptr1==ptr2){
           break;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    
    }
        return ptr1;
    }
};
