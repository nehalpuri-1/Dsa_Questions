#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
    }
};

int main(){

Node* a=new Node(7);//head 
Node* b=new Node(0);//head 
Node* c=new Node(1);//head 
Node* d=new Node(8);//head 
Node* e=new Node(2);//head 

a->next=b;
b->next=c;
c->next=d;
d->next=e;


cout<<a->val<<endl;
cout<<a->next->val<<endl;
cout<<a->next->next->val<<endl;
cout<<a->next->next->next->val<<endl;
cout<<a->next->next->next->next->val<<endl;

}