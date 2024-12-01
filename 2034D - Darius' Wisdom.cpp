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
   int cnt0 = 0, cnt1 = 0;
   multiset<int>s0, s1;
   for(int i = 1; i <= n; i++){
      cin >> a[i];
      if(a[i] == 0)cnt0++;
      if(a[i] == 1)cnt1++;
      if(a[i] == 1)s1.insert(i);
   }

   for(int i = cnt0 + 1; i <= n; i++){
      if(a[i] == 0)s0.insert(i);
   }

   vector<pair<int, int>>ans;
   for(int i = 1; i <= cnt0; i++){
      if(a[i] == 1){
         auto it = *(--s0.end());
         a[it] = 1;
         ans.push_back({i, it});
         s0.erase(it);
         s1.erase(i);
         s1.insert(it);
      }
      if(a[i] == 2){
         auto it = *(--s1.end());
         a[it] = 2;
         ans.push_back({i, it});
         s1.erase(it);

         auto it1 = *(--s0.end());
         a[it1] = 1; a[i] = 0;
         ans.push_back({i, it1});
         s0.erase(it1);
         s1.insert(it1);
      }
   }

   s1.clear();
   for(int i = (cnt0 + cnt1 + 1); i <= n; i++){
      if(a[i] == 1)s1.insert(i);
   }

   for(int i = cnt0 + 1; i <= (cnt0 + cnt1); i++){
      if(a[i] == 2){
         auto it = *(s1.begin());
         a[it] = 2;
         ans.push_back({i, it});
         s1.erase(it);
      }
   }

   cout << ans.size() << nn;
   for(auto it : ans){
     cout << it.ff << ' ' << it.ss << nn;
   }
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
