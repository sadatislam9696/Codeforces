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
#define     yes         cout << "YES" << nn
#define     no          cout << "NO" << nn

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
 
   int a[n + 1], cnt = 0;
   for(int i = 1; i <= n; i++){
     cin >> a[i];
     if(a[i] == 0){
        cnt++;
     }
   }
 
   if(cnt == 0){
     cout << "1\n1 " << n << nn;
     return;
   }
   if(cnt == n){
     cout << "3\n3 " << n << nn << "1 2\n1 2\n";
     return;
   }
   if(cnt == 1){
     int x = 1;
     for(int i = 1; i <= n; i++){
        if(a[i] == 0){
            x = i;
        }
     }
     if(x == n){
        cout << 2 << nn;
        cout << n - 1 << ' ' << n << nn << 1 << ' ' << n - 1 << nn;
     }
     else if(x == 1){
        cout << "2\n1 2\n1 "<< n - 1 << nn;
     }
     else{
        cout << 2 << nn;
        cout << x << ' ' << n << nn << 1 << ' ' << x  << nn;
     }
     return;
   }
 
   if(a[1] != 0){
     cout << "2\n2 " << n << nn << "1 2\n";
     return;
   }
   if(a[n] != 0){
     cout << "2\n1 " << n - 1 << nn << "1 2" << nn;
     return;
   }
   int y = 1;
   for(int i = n; i >= 1; i--){
     if(a[i] != 0){
        y = i; 
        break;
     }
   }
   if(y == 2){
     cout << "3\n3 " << n << nn << "1 2\n1 2" << nn;
     return;
   }
   cout << "3\n" << y << ' ' << n << nn;
   cout << 1 << ' ' << y - 1 << nn;
   cout << "1 2" << nn;
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
