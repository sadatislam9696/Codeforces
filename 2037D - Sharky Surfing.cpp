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
   int n, m, l;
   cin >> n >> m >> l;

   vector<pair<int, int>>hr;
   hr.push_back({0, 0});
   for(int i = 1; i <= n; i++){
     int u, v;
     cin >> u >> v; 
     hr.push_back({u, v});
   }

   deque<pair<int, int>>d;
   for(int i = 1; i <= m; i++){
      int p, x;
      cin >> p >> x;
      d.push_back({p, x});
   }

   int ans = 0, pow = 1;
   multiset<int>s;
   int flag = 0;
   for(int i = 1; i <= n; i++){
      int now = hr[i].first;
      while(d.size() > 0 and d.front().first < now){
         s.insert(d.front().second);
         d.pop_front();
      }

      int dis = hr[i].ss - hr[i].ff + 1;
      while(pow <= dis){
         if(s.empty()){
            flag = 1;
            break;
         }
         int v = *(s.rbegin());
         ans++;
         pow += v;
         s.erase(s.find(v));
      }
      if(flag == 1)break;
   }

   if(!flag) cout << ans << nn;
   else cout << -1 << nn;
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

