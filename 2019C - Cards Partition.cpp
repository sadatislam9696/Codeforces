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

/*** main observation 

     if we can divide  (total_card + k) / size_of_dek = x;
        here x = how many dek we can construct;
        
        in this problem we can construct minimum dek = max_of_hole array;
        1. if x < max_of_hole array; then it is not possible to construct 
           x dek;
        2. if(size_of_dek * number of dek < sum) then some card are unused
           in this condition;
           
           other wise ans is possible yooo;
**/  
        
void solution(){
    ll n, k;
    cin >> n >> k;

    ll a[n + 1];
    ll mx = 0, sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }

    //cout << "mx : " << mx << nn;

    ll ans = 1;
    for(int i = n; i >= 1; i--){
        ll dk = (sum + k) / (1ll * i);
        //cout << "dk : " << dk << nn;

        if(dk >= mx and (1LL * dk * i) >= sum){
            if((1LL * dk * i) <= ((sum + k))){
                cout << i << nn;
                return;
            }
        }
    }
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
