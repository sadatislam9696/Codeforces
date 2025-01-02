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
const int N = 2e5 + 9;

int n;
vector<pair<int, int>>v;
bool valid(int mid){
   int mn = 0, mx = 0;
   for(auto it : v){
      int b = it.ff, e = it.ss;
      int x = mid + mx, y = mn - mid;
      if(x < b or e < y){
         return false;
      }
      mx = min(e, x);
      mn = max(b, y);
   }
   return true;
}
void solution(){
   cin >> n;

   for(int i = 1; i <= n; i++){
      int l, r;
      cin >> l >> r;
      v.push_back({l, r});
   }

   int l = 0, r = 1e9, ans = 0;
   while(l <= r){
        int mid = (l + r) / 2;
        if(valid(mid)){
          ans = mid;
          r = mid - 1;
        }
        else l = mid + 1;
   }
   cout << ans << nn;
   v.clear();
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
