#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n)
{
     for (int i=1;i<n;i++)
     {
          if(arr[i]<arr[i-1])
          {
              return false;
          }
     }
     return true;
}

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
           int n;
           cin>>n;
           int arr[n];
           for (int i=0;i<n;i++)
           {
              cin>>arr[i];
           }
           int mini = INT_MAX;
           for (int i=1;i<n;i++)
           {
               int val = arr[i]-arr[i-1];         
                mini = min(mini,val);
           }
           if(mini == INT_MIN)
           {
              mini = 0;
           }
           if(check(arr,n))
           {
               cout<<mini/2+1<<endl;
           }
           else{
             cout<<0<<endl;
           }
     }
     return 0;
}