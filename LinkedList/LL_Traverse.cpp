#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Node{
    public:
    int val;
    Node*next;

    Node(int val){
        this->val=val;
    }
} ;

// Traversal
void PrintLL(Node*head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// Traversal with recursion
void PrintRec_LL(Node*head){
   if(head==NULL)return;
   Node* temp=head;

   cout<<temp->val<<" ";
   PrintRec_LL(temp->next);
}

//Traversal with recursion in reverse order
void PrintRec_LL2(Node*head){
   if(head==NULL)return;
   Node* temp=head;

   PrintRec_LL2(temp->next);
   cout<<temp->val<<" ";
   
}

int main(){
Node* a=new Node(10);
Node* b=new Node(20);
Node* c=new Node(30);
Node* d=new Node(40);
Node* e=new Node(50);

a->next=b;
b->next=c;
c->next=d;
d->next=e;
e->next=NULL;

PrintRec_LL2(a);

// cout<<a->val<<" ";
// cout<<a->next->val<<" ";
// cout<<a->next->next->val<<" ";
// cout<<a->next->next->next->val<<" ";
// cout<<a->next->next->next->next->val<<" ";

}