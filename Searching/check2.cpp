#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
    int test;
	cin>>test;
	while(test--)
	{
	    int m ,n;
	    cin>>m>>n;
	    int arr[m][n];
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	          cin>>arr[i][j];
	    }
	    for(int a=0;a<m;a++)
	    {
	        for(int b=0;b<n;b++)
	        {
	            if(arr[a][b]==1)
	            {
	                for(int i=0;i<n;i++)
	                   arr[a][i]=1;
	            }
	        }
	    }
	    cout<<endl;
	    for(int i=0;i<m;i++)
	      {
	          for(int j=0;j<n;j++)
	          {
	              cout<<arr[i][j]<<" ";
	          }
	          cout<<endl;
	      }
	}
	return 0;
}