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
   ll k; 
   int n; 
   cin >> n >> k; 

   ll mx = (n / 2);
   mx = 1LL * (n & 1 ? 1LL * mx * (mx + 1) : 1LL * mx * mx) * 2;
   //cout << mx << nn;

   if(k & 1 or mx < k){
     cout << "NO" << nn;
     return;
   }
   
   k = k / 2; 
   int p[n + 1];
   memset(p, -1, sizeof(p));
   int l = 1, r = n; 
   while(l <= r){
     if((r - l) <= k){
        k -= (r - l);
        p[l] = r;
        p[r] = l;
        r--; l++;
     }
     else l++;
   }

   cout << "YES" << nn;
   for(int i = 1; i <= n; i++){
     if(p[i] != -1)cout << p[i] << ' ';
     else cout << i << ' ';
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

