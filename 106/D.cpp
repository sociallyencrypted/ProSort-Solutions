#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> a(n);
    ll sum = 0;
    for (int i=0; i<n; i++){
        int r; cin >> r;
        a[i]=r;
        sum += r;
    }
    int q; 
    cin >> q;
    vector <ll> cumulSum(n);
    cumulSum[0] = a[0];
    for (int i=1; i<n; i++){
        cumulSum[i] = cumulSum[i-1] + a[i];
    }
    for (int i=0; i<q; i++){
        ll x;
        int k;
        cin >> x >> k;
        ll rem = x%sum;
        if (rem==0){
            if (k==1){
                cout << n << endl;
            }
            else{
                cout << k-1 << endl;
            }
        }
        else{
            if (rem<=a[k-1]){
                cout<<k<<endl;
            }
            else{
                int low = 0;
                int high = n - 1;
                while (low <= high) {
                    int mid = low + (high - low) / 2;
                    if (cumulSum[mid] >= rem) {
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                }
                cout << low + 2 << endl;
            }
        }
    }
}