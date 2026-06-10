#include <bits/stdc++.h>
using namespace std;



class Node{
  public:
    int data;
    Node* next;

  Node(int x){
    data = x;
    next = NULL;
  }
};

void deletePosition(Node*& head,int x){
  if(head == NULL)
    return;
  if(x == 1){
    Node* temp = head;
    head = head->next;
    delete temp;
    return;
  }
  Node* curr = head;
  for(int i=1;i<x-1 && curr!=NULL;i++){
    curr = curr->next;
  }
  if(curr == NULL || curr->next == NULL)
    return;
  Node* temp = curr->next;
  curr->next = temp->next;
  delete temp;
}

bool search(Node* head,int key){
  Node* temp = head;
  while(temp != NULL){
    if(temp->data == key)
    return true;
    temp = temp->next;
  }
return false;
}

void deleteLast(Node*& head){
  if(head == NULL)
  return;
  if(head->next == NULL){
    delete head;
    head = NULL;
    return;
  }
  Node* temp = head;
  while(temp->next->next != NULL){
    temp = temp->next;
  }
  delete temp->next;
  temp->next = NULL;
  }


void insertPosition(Node*& head,int pos,int x){
  if(pos == 1){
    Node* temp = new Node(x);
    temp->next = head;
    head = temp;
    return;
  }
  Node* curr = head;
  for(int i=1;i<pos-1 && curr!=NULL;i++){
    curr = curr->next;
  }
  if(curr == NULL)
    return;
  Node* node = new Node(x);
  node->next = curr->next;
  curr->next = node;
}

void display(Node* head){
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

void pushFront(Node* head , int x){
  Node* newn = new Node(x);
  newn->next = head;
  head = newn;
}

void pushBack(Node* head , int x){
  Node* newn = new Node(10);
  if(head == NULL)head = newn;

  Node* temp = head;
  while(temp->next!=NULL)temp=temp->next;
  temp->next=newn;
}

void length(Node* head){
  int c=0;
  Node* temp = head;
  while(temp!=NULL){
    c++;
    temp = temp->next;
  }
}

int main(){

  Node* first = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);

  first->next=second;
  second->next=third;

  Node*head  = first;

  // Node*temp = head;
  // while(temp!=NULL){
  //   cout<<temp->data<<" ";
  //   temp=temp->next;
  // }

  display(head);
  pushFront(head,1);

  return 0;
}
