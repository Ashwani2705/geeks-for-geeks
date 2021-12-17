#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node *right;
    node *left;
    int data;
};
node *root1;
node *root2;
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
bool isIdentical(node *t1,node *t2){
   queue<node *>q1;
   queue<node *>q2;
   node *temp1,*temp2;
   if(t1==NULL && t2==NULL)
   return true;
   q1.push(t1);
   q2.push(t2);
   while(!q1.empty()&& !q2.empty()){
       temp1=q1.front();
       temp2=q2.front();
       if(temp1->data != temp2->data)
         return false;
         q1.pop();
         q2.pop();
         if(temp1->left && temp2->left){
             q1.push(temp1->left);
             q2.push(temp2->left);
         }
         else if(temp1->left || temp2->left)
             return false;
        if(temp1->right && temp2->right){
            q1.push(temp1->right);
            q2.push(temp2->right);

        }
        else if(temp1->right || temp2->right){
            return false;
        }
   }
   return true;
   }
int main(){
    root1=binarytree();
    root2=binarytree();
    cout<<"is both the treees are identical or not ?"<<isIdentical(root1,root2);

}