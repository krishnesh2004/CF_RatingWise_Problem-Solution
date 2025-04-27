#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
 
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) if (n % i == 0) return false;
    return true;
}
 
int power(int base, int exp) {
    int result = 1;
    while (exp) {
        if (exp % 2 == 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}
 
////<---------------  Acutal Code Start -------------->>>>>>
 
void DEKHO_TRY_KARO() {
   // Your solution code here
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int count0=0;
   int count1 =0;
   bool check = true;
   for (auto it : s)
   {
         if(it=='1')
         {
               count1 ++;
         }
        if (it=='0')
         {
                count0++;
         }
         else{
            count0 = 0;
         }
         /// yaha pe br br boob 1 kr dega continuous to alice phir kya krgea
         if(count0>=k)
         {
               check = false;
            //    break;
         }
   }
   if(count1<=k)
   {
       cout<<"Alice"<<endl;
       return;
   }
   if(check == false || 2*k <=n)
   {
       cout<<"Bob"<<endl;
   }
   else{
     cout<<"Alice"<<endl;
   }
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}