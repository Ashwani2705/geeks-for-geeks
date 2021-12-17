#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node *right;
    node *left;
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
void inorder(node *temp)
{
    stack<node *>s;
    while(true){
        while(temp){
            s.push(temp);
            temp=temp->left;
        }
        
        if(s.empty())
        break;
        temp=s.top();
        s.pop();
         cout<<temp->data<<" ->";
        temp=temp->right;
    }

}
int main(){
    root=binarytree();
    inorder(root);

}