#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
///// Created By Krishnesh Tiwari

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
        if (exp % 2 == 1) result = (1LL * result * base) % MOD;
        base = (1LL * base * base) % MOD;
        exp /= 2;
    }
    return result;
}

// --------------- Actual Code Start ---------------

void DEKHO_TRY_KARO() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    //  first pricompute the right to left
    unordered_set<char>right;
    vector<int>rightmove(n,0);
    for (int i=n-1;i>=0;i--)
    {
          right.insert(s[i]);
          rightmove[i] = right.size();
    }
    unordered_set<char> left;
    for (int i = 0; i < n-1; i++) {
        left.insert(s[i]);
        ans = max(ans, (left.size() + rightmove[i+1]));
    }
    cout << ans << '\n';
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}
