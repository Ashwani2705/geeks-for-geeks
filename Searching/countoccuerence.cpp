#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int occuerence(int arr[],int s,int x)
{
   int count=0;
   for(int i=0;i<s;i++)
   {
       if(arr[i]==x)
          count++;
   }
   return count;
}
int main()
{
   int s;
   cout<<"enter the size of the array  ->";
   cin>>s;
   int arr[s];
   cout<<"enter the elements  ->";
   for(int i=0;i<s;i++)
   {
       cin>>arr[i];
   }
   cout<<"the number of occuerence of x Is"<<occuerence(arr,s,3);
}
