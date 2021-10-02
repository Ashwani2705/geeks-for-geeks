#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *right;
    node *left;

};
node *head;
node* binarytree()
{
    int x;
    node *newnode=new node;
    cin>>x;
    if(x==-1)
        {
            return 0;
        }
        newnode->data=x;
        cout<<endl<<"enter the left child of  ->"<<x<<"  ->";
        newnode->left=binarytree();
        cout<<endl<<"enter the right child of  ->"<<x<<"   ->";
        newnode->right=binarytree();
        return newnode;
}
int preordertraversalgreatest(node *head)
{
   stack<node *> s;
   int max=0;
   while(true)
   {
       while(head)
       {
           if(head->data>max)
              max=head->data;
              if(head->data > max)
                 max=head->data;
           //cout<<head->data<<" ->";
           s.push(head);
           head=head->left;
             
       }
       if(s.empty())
          break;
          
          head=s.top();
          s.pop();
          head=head->right;

   }
   return max;
}
int main()
{
      head=binarytree();
      cout<<"the largest elemnt in the tree is ->"<<endl<<preordertraversalgreatest(head);

}
