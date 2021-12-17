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
int maxWidth(node *temp){
      
    //   queue<node *>q;
    //   int max=0;
    //   int size=0;
    //   q.push(temp);
    //   q.push(NULL);
    //   while(!q.empty()){
    //         temp=q.front();
    //         q.pop();
    //         if(temp==NULL){
    //             if(size>max)
    //               max=size;
    //               size=0;
    //         }
    //         if(temp!=NULL){
    //             if(temp->left){
    //                 temp=temp->left;
    //                 size++;
    //             }
    //         if(temp->right)
    //           {
    //               temp=temp->right;
    //               size++;
    //           }
    //         }
    //          else if(!q.empty())
    //     {
    //         q.push(NULL);
    //     }
          
    //   }
    //   return max;
       queue<node*> q;
        q.push(root);
        int max=INT_MIN;
        while(!q.empty()){
            int size=q.size();
            if(size>max){
                max=size;
            }
            for(int i=0;i<size;i++){
                node* r=q.front();
                q.pop();
                if(r->left){
                    q.push(r->left);
                }
                if(r->right){
                    q.push(r->right);
                }
            }
        }
        return max;
}
int main(){
    root=binarytree();
    cout<<endl;
    cout<<"the maximum width of the tree is ->"<<maxWidth(root);

}