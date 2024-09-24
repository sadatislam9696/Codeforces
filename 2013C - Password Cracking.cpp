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

bool ask(string s){
    cout << "? " << s << endl;
    bool x; cin >> x;
    return x;
}

void solution(){
    int n;
    cin >> n;

    string s = "";
    int flag = 0;

    while(s.size() < n){
        if(flag == 0){
            string r = s + '1';
            if(ask(r)){
                s = r;
            }
            else{
                r = s + '0';
                if(ask(r)){
                    s = r;
                }
                else flag = 1;
            }
        }
        else{
            string r = '1' + s;
            if(ask(r)){
                s = r;
            }
            else{
                r[0] = '0';
                s = r;
            }
        }
    }

    cout << "! " << s << endl;
    cout.flush();
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1, c = 1;
    cin >> t;
    //cin.ignore();
    while(t--){
        //cout << "Case " << c++ << ": ";
        solution();
    }
    return 0;
}
