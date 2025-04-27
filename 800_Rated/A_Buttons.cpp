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
           int anna = 0;
           int benny = 0;
           if(c%2 ==0)
           {
               anna = c/2;
               benny = c/2;
           }
           else
           {
               anna = c/2+1;
               benny = c/2;
           }
           int p = anna + a;
           int q = benny + b;
           if(p>q)
           {
              cout<<"First"<<endl;
           }
           else{
            cout<<"Second"<<endl;
           }
     }
     return 0;
}