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
          unordered_map<int,int>mpp;
          int ans =0;
          for (int i=0;i<n;i++)
          {
               int d;
              cin>>d;
              arr[i] = d;
              mpp[d]++;
              if( mpp[2]>=2 && mpp[0]>=3 && mpp[1]>=1 && mpp[3]>=1 && mpp[5]>=1 && ans==0)
              {
                   ans = i+1;
              }
          }
          cout<<ans<<endl;
      }
}