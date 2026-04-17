#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

const int MOD = 1e9 + 7;

ll power(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

void solve() {
    int n, m;
    cin >> n >> m;

    if(n > m || m % n != 0){
        cout << -1 << endl;
        return;
    }

    string s1, s2;
    cin >> s1 >> s2;

    while(s1.length() != m){
        s1 += s1;
    }
    //rotate string right
    
    for(int i = 0; i < m; i++){
        if(s1 == s2){
            cout << i << endl;
            return;
        }
        s1 = s1[n - 1] + s1.substr(1);
    }
    cout << -1 << endl;
    return;
}

int main() {
    fastio();

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}