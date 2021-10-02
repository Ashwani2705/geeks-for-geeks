#include<bits/stdc++.h>
using namespace std;
//program to find the peak element in the array peak elemnt in its neighbours numbeer is bigger

int peak(int arr[],int s)
{
      int max=0;
      int low=0,high=s-1;
      sort(arr,arr+s);
      while(low<=high)
      {
          int mid=(low+high)/2;
          if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                max=arr[mid];
            
            }
        else
      }
      
}
int main()
{
    cout<<"enter the size of the array  ->";
    int s;
    int arr[s];
    cout<<"enter the elements ";
    for(int i=0;i<s;i++)
    cin>>arr[i];
    cout<<"peak element in the array ->"<<peak(arr,s);
}

