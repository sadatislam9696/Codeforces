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

const int mod = 10000007;
const int N = 1e6 + 9;

void solution(){
   string s;
   cin >> s; 
   //map<int, int>cnt;
   set<int>r;
   for(int i = 0; i + 3 < s.size(); i++){
     if(s[i] == '1' and s[i + 1] == '1' and s[i + 2] == '0' and s[i + 3] == '0' and i <= s.size()){
        //cnt[i] = 1;
        r.insert(i);
     }
   }

   int q; 
   cin >> q; 
   while(q--){
      int i, v;
      cin >> i >> v; 
      i--;
      //cout << s << nn;

      s[i] = '0' + v;
      for(int j = i - 3; j <= i; j++){
         if(j >= 0){
            if(s[j] == '1' and s[j + 1] == '1' and s[j + 2] == '0' and s[j + 3] == '0' and j <= s.size()){
                //cnt[i] = 1;
                r.insert(j);
            }
            else{
                //cnt[i] = 0;
                r.erase(j);
            }
         }
      }
      if(r.empty()){
        cout << "NO" << nn;
      }
      else cout << "YES" << nn;
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
