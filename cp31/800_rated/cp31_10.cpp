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

int getPoints(int i, int j){
    if(i == 0 || j == 0 || i == 9 || j == 9){
        return 1;
    }else if(i == 1 || j == 1 || i == 8 || j == 8){
        return 2;
    }else if(i == 2 || j == 2 || i == 7 || j == 7){
        return 3;
    }else if(i == 3 || j == 3 || i == 6 || j == 6){
        return 4;
    }else return 5;
}

void solve() {
    int res = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            char ch;
            cin >> ch;
            if(ch == 'X') res += getPoints(i, j);
        }
    }
    cout << res << endl;
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