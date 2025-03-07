#include<bits/stdc++.h>
using namespace std;

#define nn '\n'
using ll =  long long;
using ld =  long double;

int find_ans(int n, int k, int pre){
    int l = 1, r = k, ans = 0; 
    
    while(l <= r){
        int mid = (l + r) / 2;
        if((n / mid) > pre){
          ans = mid;
          l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans;
}
void solution(){
   int n; 
   cin >> n; 
   
   set<int>ans;
   ans.insert(0);
   ans.insert(1);

   int pre = 1, cur = 1;

   int k = n; 
   while(k > 1){
      int cur = find_ans(n, k, pre);

      pre = n / cur;
      ans.insert(pre);
      k = cur;
   }

   cout << ans.size() << nn;
   for(auto it : ans){
      cout << it << ' ';
   }
   cout << nn;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}

