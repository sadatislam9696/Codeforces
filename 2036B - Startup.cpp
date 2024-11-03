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

const int mod = 10000007;
const int N = 1e6 + 9;

void solution(){
   int n, k; 
   cin >> n >> k; 
   map<ll, ll>cnt;
   for(int i = 1; i <= k; i++){
      int x, y; 
      cin >> x >> y;
      cnt[x] += y;
   }
   vector<ll>v;
   for(auto it : cnt){
      v.push_back(it.ss);
   }
   srt(v);  rev(v);
   ll ans = 0;
   int l = v.size();
   for(int i = 0; i < min(n, l); i++){
       ans += v[i];
   }

   cout << ans << nn;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int t = 1, c = 1;
    cin >> t;
    //cin.ignore();
    while(t--){
        //cout << "Case " << c++ << ": ";
        solution();
    }
    return 0;
}
