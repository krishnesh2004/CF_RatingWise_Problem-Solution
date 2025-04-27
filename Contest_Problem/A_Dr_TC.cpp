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
          string s;
          cin>>s;
          int count1 =0;
          for (auto it : s)
          {
              if(it == '1')
              {
                  count1 ++;
              }
          }
          int ans = (n-count1)+(count1*(n-1));
          cout<<ans<<endl;
    }
}