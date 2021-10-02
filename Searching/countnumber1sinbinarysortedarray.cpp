#include<bits/stdc++.h>
using namespace std;
int count(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==0)
          low=mid+1;
        else
        {
            if(mid==0||arr[mid-1]!=arr[mid])
              return (n-mid);
            else
             high=mid-1;
        }
        
    }
    return 0;

}
int main()
{
    int n=9;
int arr[]={1,1,1,1,1,0,0,0,0};
sort(arr,arr+n);
cout<<"the number of ones in the array ->"<<count(arr,n);

}