#include<bits/stdc++.h>
using namespace std;
void moveZero(int arr[],int n){
     int count=0;
     for(int i=0;i<n;i++){
          if(arr[i]!=0)
          arr[count++]=arr[i];
     }
     while(count<n){
          arr[count++]=0;
     }
     cout<<"the final outcome of the array is ->";
     for(int i=0;i<n;i++)
     cout<<" "<<arr[i];

}

int main(){
    cout<<"enter the size of the array ->";
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
      moveZero(arr,n);

}