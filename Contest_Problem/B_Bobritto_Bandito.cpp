#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
         int l ,m,n,p;
         cin>>l>>m>>n>>p;
         int need = -n;
         int leftmove = (m<need ? m : need);
         int rightmove = (m-leftmove);
         cout<<-leftmove<<" "<<rightmove<<endl;
      }
}