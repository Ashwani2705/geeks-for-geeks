#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node *left;
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
int height(node *head){
    node *temp=new node;
    int height=0;
    queue<node *>q;
    if(head==NULL){
        return 0;
    }
    q.push(head);
    q.push(NULL);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp==NULL){
            height++;
        }
        if(temp!=NULL){
            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
        else if(!q.empty()){
            q.push(NULL);

        }
    }
}
int main(){
    root=binarytree();
    cout<<endl<<"the height of the binary tree ->"<<height(root);
}