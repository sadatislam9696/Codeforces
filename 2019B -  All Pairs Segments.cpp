/***   Bismillahir Rahmanir Rahim   ***/

#include<bits/stdc++.h>
using namespace std;

#define     nn          '\n'
#define     ss          second
#define     ff          first
#define     sp(d, n)    fixed << setprecision(d) << n
#define     srt(v)      sort(v.begin(),v.end());
#define     rsrt(v)     sort(v.rbegin(),v.rend());
#define     rev(v)      reverse(v.begin(),v.end());
#define     mem(a, x)   memset(a, x, sizeof a)

using ll =  long long;
using ld =  long double;
using ull = unsigned long long;
const ld pi = acos(-1.0);
template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

int dx[6] = {0, 1, -1, 0, 0};
int dy[6] = {0, 0, 0, 1, -1};

const int M = 1e9 + 7;
const int N = 1e3 + 9;

void solution(){
    int n, q;
    cin >> n >> q;

    int c[n + 2];
    for(int i = 1; i <= n; i++){
        cin >> c[i];
    }
    c[n + 1] = c[n] + 1;

    ll k[q + 1];
    for(int i = 1; i <= q; i++){
        cin >> k[i];
    }

    map<ll, ll>cnt;
    for(int i = 1; i <= n; i++){

        int a = i - 1, b = (n - i) + 1;
        if((c[i + 1] - c[i]) == 1){
            ll x = (1LL * a * b) + (b - 1);
            cnt[x]++;
        }
        else{
            ll x = (1LL * a * b) + (b - 1);
            cnt[x]++;
            ll y = (1LL * (a + 1) * (b - 1));
            ll seg = 1LL * ((c[i + 1] - 1) - (c[i] + 1)) + 1;
            cnt[y] += seg;
        }
    }

    for(int i = 1; i <= q; i++){
        cout << cnt[k[i]] << " ";
    }
    cout << nn;
    cnt.clear();
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int t = 1, c = 1;
    cin >> t;
    //cin.ignore();
    while(t--)
    {
        //cout << "Case " << c++ << ": ";
        solution();
    }
    return 0;
}
