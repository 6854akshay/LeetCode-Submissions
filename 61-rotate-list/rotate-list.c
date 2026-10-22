struct ListNode* rotateRight(struct ListNode* head, int k) 
{
    if(head==NULL||head->next==NULL||k== 0)
        return head;
    struct ListNode *temp=head;
    int len=1;
    while(temp->next != NULL) 
    {
        temp=temp->next;
        len++;
    }
    temp->next=head;
    k=k%len;
    int steps=len-k-1;
    temp=head;
    for(int i=0;i<steps;i++)
        temp = temp->next;
    head=temp->next;
    temp->next=NULL;
    return head;
}