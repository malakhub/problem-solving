//O(n)
#include <iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int arr[105];
    int res[105];

    for(int i=1;i<=n;i++){
        cin>>arr[i];
        res[arr[i]]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<res[i]<<" ";
    }
}