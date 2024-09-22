
#include <bits/stdc++.h>
using   namespace   std;
#define    nn     '\n'

bool compare(pair<int, int>pair_1, pair<int, int>pair_2)
{
    if((1LL * pair_1.first + pair_1.second) < (1LL * pair_2.first + pair_2.second))
    {
        return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q = 1;
    cin >> q;
    while(q--)
    {
        int m; cin >> m;
        int xx[m], yy[m];

        for(int i = 0; i < m; i++)
        {
            cin >> xx[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> yy[i];
        }

        vector<pair<int, int>>vec;

        for(int i = 0; i < m; i++)
        {
            vec.push_back({xx[i], yy[i]});
        }

        sort(vec.begin(), vec.end(), compare);

        for(int i = 0; i < m; i++)
        {
            cout << vec[i].first << ' ';
        }

        cout << '\n';

        for(int i = 0; i < m; i++)
        {
            cout << vec[i].second << ' ';
        }

        cout << '\n';
    }
    return 0;
}
