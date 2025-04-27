#include<bits/stdc++.h>
using namespace std;
int main()
{
     int  t;
     cin>>t;
     while(t--)
     {
          long long  n,q;
          cin>>n>>q;
          long long  arr[n];
          for (int i=0;i<n;i++)
          {
             cin>>arr[i];
          }
          long long  sum = 0 ;
          for (int i=0;i<n;i++)
          {
               sum += arr[i];
          }
          vector<long long>prifix(n+1,0);
          for (int i=1;i<=n;i++)
          {
                prifix[i] = arr[i-1]+prifix[i-1];
          }
          while(q--)
          {
                long long l,r,k;
                cin>>l>>r>>k;
                int old_sum = (prifix[r]-prifix[l-1]);
                int add_sum = (r-l+1)*k;
                int new_sum  = sum -old_sum + add_sum;
               if(new_sum%2 !=0)
               {
                   cout<<"YES"<<endl;
               }
               else{
                 cout<<"NO"<<endl;
               }
          }
     }
}