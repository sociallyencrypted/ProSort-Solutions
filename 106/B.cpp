#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <ll> a(n);
    for (int i=0; i<n; i++){
        ll x; cin >> x;
        a[i] = x;
    } 
    ll gcd = 0;
    for (auto x: a){
        gcd = __gcd(gcd, x);
    }
    cout << gcd << endl;
}