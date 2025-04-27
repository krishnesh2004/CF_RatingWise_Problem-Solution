#include<bits/stdc++.h>
using namespace std;
int main()
{
       int t;
       cin>>t;
       while(t--)
       {
          int a,b,c;
          cin>>a>>b>>c;
          int sum = a+b+c;
          int devide = sum/3;
          if(sum%3 ==0 && a<=devide && b<=devide)
          {
              cout<<"YES"<<endl;
          }
          else{
             cout<<"NO"<<endl;
          }
       }
}