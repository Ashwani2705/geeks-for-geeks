#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node *left;
    node *right;
    int data;
};
node *root;
node *binarytree(){
    int val;
    node *newnode=new node;
    cin>>val;
    if(val==-1){
        return 0;
    }
    newnode->data=val;
    cout<<"enter the left child of ->"<<val<<" ->";
       newnode->left=binarytree();
       cout<<"enter the right child of ->"<<val<<"->";
       newnode->right=binarytree();
       return newnode;
}
void preorder(node *temp){
    stack<node *>s;
    while(true){
        while(temp){
            s.push(temp);
            cout<<temp->data<<" _> ";
            temp=temp->left;
        }
        if(s.empty())
          break;
          temp=s.top();
          s.pop();
          temp=temp->right;

    }
}
int main(){
    root=binarytree();
    preorder(root);
}