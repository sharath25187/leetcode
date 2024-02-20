struct ListNode* reverseList(struct ListNode* head) {

    int q[5000];
    if (head == NULL)
        return head;
    struct ListNode *temp=head;
    int i=0;
    while(temp!=NULL)
    {
        q[i]=temp->val;
        temp=temp->next;
        i++;
    }
    struct ListNode *cur=head;
    while((i-1)>=0)
    {
        cur->val=q[i-1];
        cur=cur->next;
        i--;
    }
    return head;
    
}