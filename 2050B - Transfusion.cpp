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
   ll sum1 = 0, sum2 = 0, tot = 0;
   for(int i = 1; i <= n; i++){
      int x; cin >> x; 
      tot += x;
      if(i & 1)sum1 += x;
      else sum2 += x;
   }

   ll x = tot / n;
   if((1LL * x * n) == tot){
      int odd = n / 2, even = n / 2;
      if(n & 1)odd++;

      if((1LL * even * x == sum2) and (1LL * odd * x == sum1)){
         cout << "YES" << nn;
         return;
      }
   }
   cout << "NO" << nn;
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

