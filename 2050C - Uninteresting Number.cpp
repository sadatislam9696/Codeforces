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
   string s; 
   cin >> s; 

   ll sum = 0;
   int cnt2 = 0, cnt6 = 0;
   for(int i = 0; i < s.size(); i++){
       int x =  (s[i] - '0');
       sum += x;
       if(x == 2)cnt2++;
       if(x == 3)cnt6++;
   }
   
   int next = 0;
   for(int i = sum; i <= sum + 18; i++){
      if(i % 9 == 0){
         if((i - sum) % 2 == 0){
            next = i - sum;
         }
      }
   }
   if(sum % 9 == 0){
      cout << "YES" << nn;
      return;
   }

   cnt2 = min(cnt2, 9);
   cnt6 = min(cnt6, 3);
   
   int n = cnt2 + cnt6;
   vector<int>a(n, 0);
   for(int i = 0; i < cnt2; i++) a[i] = 2;
   for(int i = cnt2; i < n; i++) a[i] = 6;

   for(int mask = 0; mask < (1 << n); mask++){
    sum = 0;
    for(int i = 0; i < n; i++){
      if((mask >> i) & 1){
        sum += a[i]; 
      }
    }
    if(sum == next){
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


