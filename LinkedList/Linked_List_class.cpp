#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next=NULL;
    }
};

class MyLinkedList
{
public:
    Node *head;
    Node *tail;
    int length;
    MyLinkedList()
    {
        head = tail = NULL;
        length = 0;
    }

    void size()
    {
        int size=0;
        Node *temp = head;
        while (temp != NULL)
        {size++;
         temp = temp->next;
        }
        cout<<size<<endl;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val <<" ";
            temp = temp->next;
        }
        cout<<endl;
    }


    void insertAtTail(int val)
    {
        Node *n = new Node(val);
        if (length == 0)
        {
            head = tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        length++;
    }

    void insertAtHead(int val){
        Node* n=new Node(val);
        if(length==0){
            head=tail=n;
        }
        else{
            n->next=head;
            head=n;
        }
        length++;
    }

    void RemoveAtHead(){
        if(length==0){
            cout<<"empty";
            return;
        }
        else{
            head=head->next;
        }
        length--;
    }
};


int main()
{
    MyLinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
   
    // list.display();
    //  list.insertAtHead(999);
    //  list.insertAtTail(900);
     list.display();
   
     list.size();

    //  cout<<endl;

     list.RemoveAtHead();
    
    
     list.display();
   
     list.size();
}