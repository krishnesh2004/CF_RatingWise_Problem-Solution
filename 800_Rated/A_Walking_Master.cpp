#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int sx,sy,dx,dy;
          cin>>sx>>sy>>dx>>dy;
          // phla case ydi y destination chota ha to pahuch hi nhi skte 
          if(dy<sy)
          {
             cout<<-1<<endl;
             continue;
          }
          // ab hm dekhe kitne step me vha pachu skte ha 
          int step_y = dy-sy;
          // yaha hmara y destination pahuch chuka ha 
          sx +=  step_y;
          if(sx<dx)
          {
             cout<<-1<<endl;
             continue;
          }
          int step_x = sx-dx;
          int count = step_x+step_y;
          cout<<count<<endl;
     }
}