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
    ll b, c, d;
    cin >> b >> c >> d;   /// check ith bit of a, b, c, d independent;

    ll a = 0ll;
    for(int i = 0; i < 63; i++){
        ll A = (1ll << i);
        //cout << "A :" << A << nn;
        ll B = (A & b);
        ll C = (A & c);
        ll D = (A & d);
        if((A | B) == D + (A & C)){
            //cout << a << nn;
            a += A;
        }
    }
    if((a | b) == d + (a & c)){
        cout << a << nn;
    } else cout << -1 << nn;
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
