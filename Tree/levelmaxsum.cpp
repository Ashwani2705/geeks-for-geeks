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
int findlevel(node *head)
{
    //the idea is simple for the program how we find the level 
    //exactly the same way we will move and keep an eye for the sum
    int level=0,curr_sum=0,max_sum=0;
    node *temp=new node;
    queue<node *>q;
    int max_level=0;
    q.push(head);
    q.push(NULL);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            if(curr_sum>max_sum)
            {
                max_sum=curr_sum;
                max_level=level;
            }
            curr_sum=0;
            if(!q.empty())
               q.push(NULL);
               level++;
        }
        else{
            curr_sum+=temp->data;
            if(temp->left)
               q.push(temp->left);
            if(temp->right)
               q.push(temp->right);
        }
    }
    return max_level;
}
int main()
{
    root=binarytree();
    cout<<"the maximum sum in this binary tree at level ="<<findlevel(root);
}