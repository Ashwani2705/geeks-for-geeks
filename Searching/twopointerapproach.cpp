//program to find the pair whose sum is equal to the number 
#include<bits/stdc++.h>
using namespace std;
bool ispair(int arr[],int s,int x)
{
    int low=0,high=s-1;
    while(low!=high)
    {
        
    }
}
int main()
{
    cout<<"enter the number of elemnnts ->";
    int s;
    cin>>s;
    int arr[s];
    cout<<"enter the element  ->";
    for(int i=0;i<s;i++)
      cin>>arr[i];
      sort(arr,arr+s);
      int x;
      cout<<"enter the number u want to find the pair in array  ->";
      cin>>x;
      cout<<"is there any pair present in the array  ->"<<ispair(arr,s,x);
}