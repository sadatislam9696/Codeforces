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
   for(int i = 1; i <= n; i++){
     cin >> a[i];
   }
   
   vector<int>ans,b;
   b.push_back(0);

   map<int, int>cnt, v;
   
   int flag = 0;
   for(int i = 1; i <= n; i++){
      int x = a[i];
      if(x < 0){
        if(cnt.find(abs(x)) == cnt.end()){
           flag = 1;
           break;
        }
        else{
           v.erase(abs(x));
           if(v.empty()){
              if(!ans.empty()){
                 int y = b.back();
                 ans.push_back(i - y);
                 b.push_back(i);
              }
              else{
                  ans.push_back(i);
                  b.push_back(i);
              } 
              cnt.clear();
           }
        }
      }
      else{
        if(!cnt.empty() and cnt.find(x) != cnt.end()){
            flag = 1;
            break;
        }
        else{
            cnt[x] = 1;
            v[x] = 1;
        }
      }
   }
   // for(auto it : v){
   //   cout << it.ff << nn;
   // }
   
   int y = b.back();
   if(!v.empty() or y < n)flag = 1;
   if(flag){
     cout << -1 << nn;
     return;
   }
   
   int m = ans.size();
   cout << m << nn;
   for(auto it : ans){
     cout << it << ' ';
   }
   cout << nn;
}
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int t = 1, c = 1;
    //cin >> t;
    //cin.ignore();
    while(t--){
        //cout << "Case " << c++ << ": ";
        solution();
    }
    return 0;
}

