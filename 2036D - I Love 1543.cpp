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

const int M = 1e5 + 7;
const int N = 105;

void solution(){
    int n, m;
    cin >> n >> m;

    char a[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    } 

    int ans = 0;
    int x1 = 1, x2 = n, y1 = 1, y2 = m;
    while(x1 < x2 and y1 < y2){
        vector<int>v; 
        for(int i = y1; i <= y2; i++){
            v.push_back(a[x1][i]);
        }

        x1++;
        for(int i = x1; i <= x2; i++){
            v.push_back(a[i][y2]);
        }

        y2--;
        for(int i = y2; i >= y1; i--){
            v.push_back(a[x2][i]);
        }

        x2--;
        for(int i = x2; i >= x1; i--){
            v.push_back(a[i][y1]);
        }
        y1++;

        if(v.size() >= 4){
            v.push_back(v[0]);
            v.push_back(v[1]);
            v.push_back(v[2]);
        }

        for(int i = 0; i + 3 < v.size(); ){
            if(v[i] == '1' and v[i + 1] == '5' and 
               v[i + 2] == '4' and v[i + 3] == '3'){
               ans++;
               i += 4;
            }
            else i++;
        }
    }
    cout << ans << nn;
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
