#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          vector<string>s(3);
          for (int i=0;i<3;i++)
          {
             cin>>s[i];
          }
          string ans = "";
          for (auto it : s)
          {
              ans += it[0];
          }
          cout<<ans<<endl;
     }
}