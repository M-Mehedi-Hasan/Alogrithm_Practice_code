#include <iostream>
using namespace std;

class Node{
 public:
    int data;
    Node* next;
};
void Display(Node *p){
    while (p!=NULL)
    {
         cout<<p->data<<endl;
         p=p->next;
    }
    
}
void LocInsertNode(Node *previous, int newValue){
    if (previous==NULL)
    {
      return;
    }

    Node *newnode=new Node();
    newnode->data=newValue;

    newnode->next=previous->next;
    previous->next=newnode;

    
}

int main()
{
 
    Node *head=new Node();
    Node *second=new Node();
    Node *third=new Node();

    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    LocInsertNode(head,20);
    Display(head);
}