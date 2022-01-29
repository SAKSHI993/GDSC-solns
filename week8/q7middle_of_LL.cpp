void insert(ListNode* &ptr,int val){
   ListNode* n=new ListNode(val);
    if(ptr==NULL){
        ptr=n;
        return;
    }
    ListNode* temp=ptr;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
class Solution {
public:
    ListNode* middleNode(ListNode* &head) {
        int length=0;
        ListNode* temp=head;
        ListNode* ptr=NULL;
        
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
     // cout<<length;
       length=length/2;
        temp=head;
        while(length&&temp!=NULL){
            temp=temp->next;
            length--;
        }
        while(temp!=NULL){
             
            insert(ptr,temp->val);
               temp=temp->next;
        }
        return ptr;
    }
};
