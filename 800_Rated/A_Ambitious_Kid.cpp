#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin>>n;
      int arr[n];
      for (int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      int mini = INT_MAX;
      for (int i=0;i<n;i++)
      {
          int val = abs(0+arr[i]);
          mini = min(mini,val);
      }
      cout<<mini;
}