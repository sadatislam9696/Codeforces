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

map<int, int>cnt;
void find_prime(int n){
    int i = 2;
    while(i * i <= n){
        while(n % i == 0){
            cnt[i]++;
            n /= i;
        }
        i++;
    }

    if(n > 1)cnt[n]++;
}
void solution(){
   int n; 
   cin >> n;

   int a[n + 1];
   for(int i = 1; i <= n; i++){
     cin >> a[i];
     find_prime(a[i]);
   }

   for(auto it : cnt){
      if(it.second % n != 0){
         cout << "NO" << nn;
         cnt.clear();
         return;
      }
   }
   
   cout << "YES" << nn;
   cnt.clear();
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
 
