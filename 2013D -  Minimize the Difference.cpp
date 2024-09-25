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
    int n;
    cin >> n;
    ll a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    ll mn = 1e13;
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i];
        mn = min<ll>(mn, (sum / i));
    }

    ll mx = -1;
    sum = 0;
    for(int i = n; i >= 1; i--){
        sum += a[i];
        int x = (n - i) + 1;
        mx = max<ll>(mx, ceil(sum / (1.0 * x)));
    }

    cout << mx - mn << nn;
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
