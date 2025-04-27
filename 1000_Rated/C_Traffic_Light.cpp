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
   int n ;
   cin>>n;
   char p ;
   string s;
   cin>>p;
   cin>>s;
   int ans = INT_MIN;
    n *=2;
    string temp = s+s;
    int index_g = -1;
    for (int i=n-1;i>=0;i--)
    {
        if(temp[i]=='g')
        {
               index_g = i;
        }
        if(temp[i]==p && index_g != -1)
        {
               ans = max(ans,(index_g-i));
        }
    } 
    cout<<ans<<endl;
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}