#include<bits/stdc++.h>
using namespace std;
int main()
{  

/* intput 001100110;
   output = 2 
   first 1 theke last 1 er maje 
   2 ta zero ache tai output 2 */
   
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int suro=0,ses=0,cnt=0;
 
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                suro=i;
                break;
            }
        }
        for(int i=s.size(); i>=suro; i--)
        {
            if(s[i]=='1')
            {
                ses=i;
                break;
            }
        }
       for(int i=suro; i<ses; i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
            else
                continue;
        }
        cout<<cnt<<'\n';
    }
 
    return 0;
}
