

Codeforces
| In English По-русски
sadat_islam | Logout

HomeTopCatalogContestsGymProblemsetGroupsRatingEduAPICalendarHelpRayan 


ProblemsSubmit CodeMy SubmissionsStatusHacksRoomStandingsCustom Invocation
    
General
  
#	Author	Problem	Lang	Verdict	Time	Memory	Sent	Judged	 	 
297072827	Practice:
sadat_islam	1470A - 58	C++20 (GCC 13-64)	Accepted	187 ms	48 KB	2024-12-18 11:24:09	2024-12-18 11:24:09	Add to favourites	Compare
→ SourceCopy
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
   int n, m; 
   cin >> n >> m;
   int a[n + 1], b[m + 1];
   for(int i = 1; i <= n; i++){
     cin >> a[i];
   }
   for(int i = 1; i <= m; i++){
     cin >> b[i];
   }
 
   sort(a + 1, a + n + 1);
 
   int i = n, j = 1;
   ll sum = 0;
   while(j < a[i] and j <= m and i > 0){
      sum += b[j];
      j++; i--;
   }
   for(int k = i; k >= 1; k--){
     sum += b[a[k]];
   }
 
   cout << sum << nn;
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
Click to see test details

Codeforces (c) Copyright 2010-2024 Mike Mirzayanov
The only programming contests Web 2.0 platform
Server time: Dec/18/2024 14:24:48UTC+6 (j2).
Desktop version, switch to mobile version.
Privacy Policy
Supported by
TON
 
ITMO University
