#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n ;
          cin>>n;
          int arr[n];
          for (int i=0;i<n;i++)
          {
              cin>>arr[i];
          }
          bool found = false;
          for (int i=0;i<n;i++)
          {
              if(arr[i]>n)
              {
                 found = true;
              }
          }
          if(arr[0]==1 && !found)
          {
            cout<<"YES"<<endl;
          }
          else
          {
              cout<<"NO"<<endl;
          }
     }
}