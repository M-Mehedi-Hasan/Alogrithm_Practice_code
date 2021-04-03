#include <iostream>
using namespace std;


class Node{
public:
    int data;
    Node *next;    
};

void display(Node *p){
    while (p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    
}

void insert(Node**  header, int newvalue){
    Node* newnode=new Node();
    newnode->data=newvalue;
    newnode->next=*header;
    *header=newnode;
}
int main()
{
    Node* Head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    Head->data=1;
    Head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    insert(&Head,-1);
    display(Head);
}