#include <iostream>
using namespace std;

class Node{
public:
    int data; 
    Node *next;
};
void Display(Node *p){
    while (p!=NULL)
    {
    cout<<p->data<<endl;
    p=p->next;
    }
    
}
void InsertAtTheEndNode(Node **head, int newvalue){
    Node* newNode=new Node();
    newNode->data=newvalue;

    if (*head==NULL)
    {
        *head=newNode;
        return;
    }

    Node *last=*head;
    
    while (last->next!=NULL)
    {
       last=last->next;
    }
    last->next=newNode;
    
    
}

int main()
{       Node *head=new Node();
        Node *second=new Node();
        Node *third =new Node();

        head->data=1;
        head->next=second;
        second->data=2;
        second->next=third;
        third->data=3;
        third->next=NULL;
        InsertAtTheEndNode(&head,20);
        Display(head);
}