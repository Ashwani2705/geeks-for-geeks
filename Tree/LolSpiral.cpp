#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *right;
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
vector<int> spiral(node *head){
    vector<int >v;
    queue<node *>q;
    if(head==NULL)
    return v;
    int check=0;
    q.push(head);
    node *temp;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        v.push_back(temp->data);
        if(check==0){
            if(temp->left)
            {
                q.push(temp->left);
                
            }
            if(temp->right){
                q.push(temp->right);
                
            }
            check++;
        }
        else{
            if(temp->right)
            {
                q.push(temp->right);
                
            }
            if(temp->left){
                q.push(temp->left);
                
            }
            check--;
       }

    }
    return v;
}
int main(){
    root=binarytree();
    vector<int>v;
    v=spiral(root);
    for(int i=0;i<v.size();i++)
    cout<<" "<<v[i];
}