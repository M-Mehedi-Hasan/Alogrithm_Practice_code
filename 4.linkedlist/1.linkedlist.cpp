#include <iostream>
using namespace std;
//likedlist Create
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

int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->data=5;
    head->next=second;
    second->data=6;
    second->next=third;
    third->data=7;
    third->next=NULL;

    Display(head);


}