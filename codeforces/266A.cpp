//A. Stones on the Table
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long
#define endl '\n'

void InOutFast()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

#define ForThePlot InOutFast();

signed main(void)
{
    ForThePlot;
    int n;
    cin>>n;
    int c=0;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i+1]==s[i])
        {
            c++;
        } 
    }
    cout<<c;
    return 0;
}
