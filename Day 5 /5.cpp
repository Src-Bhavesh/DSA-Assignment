Node* nthFromEnd(Node* head,int n)
{
Node* first = head;
Node* second = head;
for(int i=0;i<n;i++)
first = first->next;
while(first)
{
first = first->next;
second = second->next;
7
}
return second;
}
