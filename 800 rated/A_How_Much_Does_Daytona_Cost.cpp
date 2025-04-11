#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
         int n , k;
         cin>>n>>k;
         int arr[n];
         for (int i=0;i<n;i++)
         {
              cin>>arr[i];
         }
         map<int,int>mpp;
         for (auto it : arr)
         {
              mpp[it]++;
         }
         if(mpp.find(k) != mpp.end())
         {
             cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
      }
      return 0;
}