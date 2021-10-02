#include<bits/stdc++.h>
using namespace std;
int majorityelement(int arr[],int s)
{
    int majindex=0;int ct=1;
    for(int i=1;i<s;i++)
    {
        if(arr[majindex]==arr[i])
          ct++;
        else
        ct--;
        if(ct==0)
        {
            majindex=i,ct=1;
        }
        
    }
    ct = 0;
    
        for(int i = 0; i < s; i++){
            if(arr[i] ==  arr[majindex])
                ct++;
        }
        if(ct>s/2)
          return arr[majindex];
        else
           return -1;
        
        


}
int main()
{
    cout<<"enter the size of the array  ->";
    int s;
    cin>>s;
    int arr[s];
    cout<<"enter the numbers  ->";
    for(int i=0;i<s;i++)
      cin>>arr[i];
      //if element is present in majorit of s/2 or more tan it will return the elemnt otherwise it will return -1;
      cout<<endl<<"answer"<<majorityelement(arr,s);

}