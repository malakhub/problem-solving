//O(nlog(n))
#include <iostream>
#include <algorithm> 
using namespace std;

struct ans{
    int a;
    int b;
};

bool cmp(ans x,ans y){
    return x.a < y.a;
}

int main(void)
{
    int n;
    cin>>n;
    ans arr[100];
    for(int i=1;i<=n;i++){
        cin>>arr[i-1].a;
        arr[i-1].b=i;
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].b<<" ";
    }
}