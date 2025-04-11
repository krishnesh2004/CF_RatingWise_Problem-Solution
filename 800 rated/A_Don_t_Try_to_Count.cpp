#include<bits/stdc++.h>
using namespace std;
bool issafe(string s , string p )
{
     if(p.size()<s.size())
     {
         return false;
     }
     for (int i=0;i<p.size()-s.size()+1;i++)
     {
           if(p.substr(i,s.size())==s)
           {
              return true;
           }
     }
     return false;
}
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n1 , n2 ;
          cin>>n1>>n2;
          string s1,s2;
          cin>>s1;
          cin>>s2;
          string x0 = s1;
          string x1 = x0+x0;
          string x2 = x1+x1;
          string x3 = x2+x2;
          string x4 = x3+x3;
          string x5 = x4+x4;
          int ans = -1;
          if(issafe(s2,x0))
              ans = 0;
          else if (issafe(s2,x1))
                ans = 1;
          else if(issafe(s2,x2))
                ans = 2;
          else if(issafe(s2,x3))
                ans = 3;
          else if(issafe(s2,x4))
                 ans = 4;
          else if (issafe(s2,x5))
                ans = 5;
          cout<<ans<<endl;
     }
}