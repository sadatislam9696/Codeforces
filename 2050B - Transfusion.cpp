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
   int a[n + 1];
   ll sum = 0;
   for(int i = 1; i <= n; i++){
      cin >> a[i];
      sum += a[i];
   }

   ll x = sum / n;
   if((1LL * x * n) == sum){
      sum = 0;
      ll sum1 = 0;
      for(int i = 1; i <= n; i++){
         if(i & 1) sum += a[i];
         else sum1 += a[i];
      }
      int odd = n / 2, even = n / 2;
      if(n & 1)odd++;

      if((1LL * even * x == sum1) and (1LL * odd * x == sum)){
         cout << "YES" << nn;
      }
      else cout << "NO" << nn;
   }
   else cout << "NO" << nn;
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

