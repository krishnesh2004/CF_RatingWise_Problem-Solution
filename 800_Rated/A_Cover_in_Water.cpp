#include<bits/stdc++.h>
using namespace std;
int main()
{
       int t ;
       cin>>t;
       while(t--)
       {
            int n ;
            cin>>n;
            string s;
            cin>>s;
            int flag = true;
            int dotcount =0;
            for (int i=0;i<n;i++)
            {
                  if(s[i]=='.' && i+1<n && s[i+1]=='.' && i-1>=0 && s[i-1]=='.')
                  {
                       flag = false;
                       break;
                  }
                  else if (s[i]=='.')
                  {
                      dotcount++; 
                  }
            }
            if(flag == false)
            {
                  cout<<2<<endl;
            }
            else
            {
                  cout<<dotcount<<endl;
            }
       }
       return 0;
}