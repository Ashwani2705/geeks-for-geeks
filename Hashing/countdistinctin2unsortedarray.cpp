#include<bits/stdc++.h>
using namespace std;
int countDistinct(int arr1[],int arr2[],int m ,int n)
{    
    unordered_set<int>a(arr1,arr1+m);
    for(int i=0;i<n;i++)
        a.insert(arr2[i]);
       return (a.size()-1);




}
int main()
{
    int m,n;
    cout<<"enter the size of the both the array";
    cin>>m>>n;
    int arr1[m];
    int arr2[n];
    cout<<"enter the values in first arrray  ";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"entre the values imn the second array->";
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    cout<<"total distinct elemnts in the array is ->"<<countDistinct(arr1,arr2,m,n);
}