#include<bits/stdc++.h>
using namespace std;
int main ()
{
      int t;
      cin>>t;
      while(t--)
      {
          long long n;
          cin>>n;
          int count =0;
          for (int i=1;i<=100000000;i++)
          {
              if(n%i==0)
              {
                   count ++;
              }
              else{
                 break;
              }
          }
          cout<<count<<endl;
      }
}