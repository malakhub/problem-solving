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
    int arr[n];
    int total=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    int count=0;
    for(int i=n-1;i>=0;i--){
        sum+=arr[i];
        total-=arr[i];
        count++;
        if(sum>total){
            break;
        }
    }
    cout<<count;

    return 0;
}
