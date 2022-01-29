class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * todelete=node->next;
        if(node->next==NULL){
            delete node;
            delete todelete;
            return;
        }
        
        node->val=node->next->val;
        node->next=node->next->next;
        delete todelete;
        
        
    }
};
