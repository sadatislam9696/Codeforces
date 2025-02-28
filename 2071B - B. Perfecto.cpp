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

bool p_squre(ll n){
   ll sum = (1LL * n * (n + 1)) / 2; 
   ll x = sqrt(sum);
   if((1LL * x * x) == sum) return true;
   return false;
}
void solution(){
   ll n; 
   cin >> n; 
   
   if(p_squre(n)){
    cout << - 1 << nn;
    return;
   }
   
   vector<int>v;
   v.push_back(2);
   v.push_back(1);

   for(int i = 3; i <= n; i++){
     if(p_squre(i)){
        v.push_back(i + 1);
        v.push_back(i);
        i++;
     }
     else v.push_back(i);
   }
   
   for(auto it : v){
      cout << it << ' ';
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

