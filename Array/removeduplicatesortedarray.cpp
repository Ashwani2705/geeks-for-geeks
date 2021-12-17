#include<bits/stdc++.h>
using namespace std;
//removing duplicates of sorted array

 int removeDuplicates(int nums[],int n) {
        int count=0;
    
        for(int i=0;i<n;i++)
        {
                if(i<n-1 && nums[i]==nums[i+1])
                    continue;
             nums[count]=nums[i];
            count++;
        }
        return count;
        
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the number ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    cout<<"unique elements are->"<<removeDuplicates(arr,n);

}
