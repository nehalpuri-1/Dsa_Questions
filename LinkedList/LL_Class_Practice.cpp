#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};


class MyLL{
    public:
    Node* head;
    Node* tail;
    int length;
    MyLL(){
        head=NULL;
        tail=NULL;
        length=0;
    }

    void display(){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

     void Size(){
       Node* temp=head;
       int s=0;
       while(temp!=NULL){
        s++;
        temp=temp->next;
       }
       cout<<s<<" "<<endl;
    }

    void InsertAtTail(int val){
        Node* n=new Node(val);
        if(length==0){
            head = tail= n;
        }

      else 
      { tail->next=n;
        tail=n;}
        length++;
    }

    void InsertAtHead(int val){
        Node* n=new Node(val);
        if(length==0){
            head = tail= n;
        }

      else 
      { n->next=head;
        head=n;  
      }
        length++;
    }
    
    void RemoveFromHead(){
       
        if(length==0){
            cout<<"Empty ! ";
            return;
        }
      else 
      { head = head ->next;
      }
        length--;
    }

   void insertAtIndex(int i,int val){
    if(length==0 or i>length){
        cout<<"empty"<<endl;
        return;
    }

    Node* n=new Node(val);
    if(i==0){
        InsertAtHead(val);
        return;
    }
    else if(i==length){
        InsertAtTail(val);
        return;
    }
    else{
        Node* temp=head;
        int s=0;
     Node* n=new Node(val);
     while(s<i-1){
        temp=temp->next;
        s++;
     }  
     n->next=temp->next;
     temp->next=n;
    }
    length++;
   }

//    void DeleteFromEnd(){
//     if(length==0){
//         cout<<"empty";
//         return;
//     }
//     else 
//         {if(tail->next==NULL){
//             tail->next=NULL;
//         }}
//    }

   void DeleteAtIndex(int i){
    if(i==0){
        RemoveFromHead();
        return;
    }
    int s=0;
    Node* temp=head;
    while(s<i-1){
        temp=temp->next;
        s++;
    }
    temp->next=temp->next->next;
   }

};

int main(){
    MyLL list;
// Node* a= new Node(10);
// Node* b= new Node(20);
// Node* c= new Node(30);
// Node* d= new Node(40);
// Node* e= new Node(50);
list.InsertAtHead(10);
list.InsertAtTail(20);
list.InsertAtTail(30);
list.InsertAtTail(40);
list.display();
cout<<endl;


// list.insertAtIndex(2,99);
list.DeleteAtIndex(3);
list.display();
}