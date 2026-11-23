#include<iostream>
#include<string>
#include<climits>

using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=right=NULL;
    }
};

void printTree(Node* root){
    if(root == NULL)return;

    cout<<root->val<<" ";
    printTree(root->left);
    printTree(root->right);
}

int levelOfTree(Node* root){
    if(root == NULL)return 0;

    int left = levelOfTree(root->left);
    int right = levelOfTree(root->right);
    return(1+max(left,right));
}

int heightOfTree(Node* root){ //height=level-1
    if(root == NULL)return 0;

    return(levelOfTree(root)-1);
}

int main(){
 Node *a=new Node(1);
 Node *b=new Node(2);
 Node *c=new Node(3);
 Node *d=new Node(4);
 Node *e=new Node(5);
 Node *f=new Node(6);
 a->left=b;
 a->right=c;
 b->left=d;
 b->right=e;
 c->left=f;

 cout<<"treeTraversal:";
printTree(a);
cout<<endl;
cout<<"levelOfTree:"<<levelOfTree(a);
cout<<endl;
cout<<"heightOfTree:"<<heightOfTree(a);
}