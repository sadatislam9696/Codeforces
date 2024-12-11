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

ll t[4 * N], a[N], dif[N];
struct segtree
{
  void build(int n, int b, int e){
    if(b == e){
       t[n] = dif[b];
       return;
    }

    int mid = (b + e) >> 1, l = n << 1, r = l + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = __gcd(t[l], t[r]);
  }

  int query(int n, int b, int e, int i, int j){
    if(e < i or b > j){
      return 0;
    }
    if(b >= i and e <= j){
      return t[n];
    }

    int mid = (b + e) >> 1, l = n << 1, r = l + 1;
    int x = query(l, b, mid, i, j);
    int y = query(r, mid + 1, e, i, j);
    return __gcd(x, y);
  }
}st; 

void solution(){
   int n, q; 
   cin >> n >> q; 
   for(int i = 1; i <= n; i++){
      cin >> a[i];
   }
   
   for(int i = 1; i < n; i++){
      dif[i] = abs(a[i] - a[i + 1]);
   }

   // for(int i = 1; i < n; i++){
   //    cout << dif[i] << ' '; 
   // }cout << nn;

   if(n == 1){
      while (q--){
         int l, r;
         cin >> l >> r;
         cout << 0 << ' ';
      }
      cout << nn;
      return;
   }

   st.build(1, 1, n - 1);
   //cout << t[2] << nn;
   while(q--){
      int l, r; 
      cin >> l >> r;
      if(l == r) cout << 0 << ' ';
      else cout << st.query(1, 1, n - 1, l, r - 1) << ' ';
   }
   cout << nn;
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

