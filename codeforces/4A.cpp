#include <bits/stdc++.h>
 
using namespace std;
 
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
    if(n%2==0 && n>2){
        cout<<"yes";
    }
    else 
    cout<<"no";
    return 0;
}