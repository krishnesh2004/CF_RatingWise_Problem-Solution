#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin >> t;
      while(t--)
      {
          int n , k;
          cin>>n>>k;
          vector<int> arr(n);
          for (int i=0;i<n;i++)
          {
              cin>>arr[i];
          }
          sort(arr.begin(),arr.end());
          int maxi = 0;
          int mm = 0;
          for (int i=1;i<n;i++)
          {
             if(abs(arr[i]-arr[i-1])<=k)
             {
                  mm ++;
                  maxi = max(maxi,mm);
             }
             else{
                  mm = 0;
             }
          }
          cout<<n-maxi-1<<endl;
      }
}