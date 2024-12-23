#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <class T> using oset = tree<T, null_type,
                         less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long
#define nn '\n'
const int N = 500005;

int a[N];

void solve(){
    int n, x, y;
    cin >> n >> x >> y;

    int sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }

    oset<int>s;
    s.insert(a[1]);

    int ans = 0;
    for(int i = 2; i <= n; i++){
        int v = sum - a[i];
        int l = v - y;
        int r = v - x;

        if(l > r) continue;

        ans += s.order_of_key(r + 1) - s.order_of_key(l);
        s.insert(a[i]);
    }

    cout << ans << nn;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
       solve();
    }

    return 0;
}
