#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
};
node *root;
node * binarytree()
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
node* search(node *temp,int x)
{
    stack<node *>s;
    while(true)
    {
        while(temp)
        {
            s.push(temp);
            if(x==temp->data)
              return temp;
              temp=temp->left;
        }
        if(s.empty())
          break;
          temp=s.top();
          s.pop();
          temp=temp->right;
    }
    return NULL;
}
int main()
{
    root=binarytree();
    cout<<"enter the element you want to search  ->";
    int x;
    cin>>x;

node *s=search(root,x);
if(s)
   cout<<"the element is present "<<s->data;
else  
   cout<<"the value is not present so sorry!";

}