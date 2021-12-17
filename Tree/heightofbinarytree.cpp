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
int height(node *temp){
    queue<node *>q;
    int height=0;
    q.push(temp);
    q.push(NULL);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp==NULL){
            height++;
        }
        if(temp!=NULL){
            if(temp->left)
              temp=temp->left;
            if(temp->right)
              temp=temp->right;
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
    return height+1;
}
int main(){
    root=binarytree();
    cout<<endl<<"height of the binary tree is ->"<<height(root);
}