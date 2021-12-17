#include<iostream>
using namespace std;
void print(int x){
    //base condition so that recursion function will terminate a point after givng the output
    if(x==0){
        return;
    }
    cout<<x<<"->";
    x--;
    print(x);
}
int main(){
    cout<<"enter the value from you want to print ->";
    int val;
    cin>>val;
    print(val);
}