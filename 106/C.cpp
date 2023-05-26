#include <iostream>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll integralRootCount = 0;
    for (ll i=0; i<n; i++){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a==0 && b==0 && c==0 && d!=0){
            continue;
        }
        if (a==0 && b==0 && d==0){
            integralRootCount++;
            continue;
        }
        ll l = -100;
        ll r = 100;
        ll m = (l+r)/2;
        while (l<=r){
            m = (l+r)/2;
            ll y = a*m*m*m + b*m*m + c*m + d;
            if (y==0){
                break;
            }
            else if (y>0){
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        if (a*m*m*m + b*m*m + c*m + d == 0){
            integralRootCount++;
        }
    }
    cout << integralRootCount << endl;
}