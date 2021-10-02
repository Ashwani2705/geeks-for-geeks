#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *right;
    node *left;
};
node *root;
node* binarytree()
{
       int val;
    node *newnode=new node;
    cin>>val;
    if(val==-1)
       return 0;
       newnode->data=val;
       cout<<"enter the left child of ->"<<val<<" ->";
       newnode->left=binarytree();
       cout<<"enter the right child of ->"<<val<<"->";
       newnode->right=binarytree();
       return newnode;
}
