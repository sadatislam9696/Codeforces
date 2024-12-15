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

const int M = 1e9 + 6;
const int N = 1e3 + 9;

vector<int>d;
void divisor(int n){
    d.push_back(1);
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            d.push_back(i);
            if(n / i != i){
                d.push_back(n / i);
            }
        }
    }
}
void solution(){
   int n, k;
   cin >> n >> k;

   if(k >= n){
    cout << 1 << nn;
    return;
   }

   divisor(n);
   sort(d.rbegin(), d.rend());

    int x = 1;
    for(auto it : d){
     if(it <= k){
       cout << n / it << nn;
       break;
    }
   }
   d.clear();
}
int main(){

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

