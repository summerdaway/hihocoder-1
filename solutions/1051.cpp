#include <iostream>
using namespace std;

int main() {
    //freopen("../input.txt","r",stdin);
    int t,m,n;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n];
        int res = 0;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<max(1,n-m);i++) res = max(res,(i+m<n?arr[i+m]:101)-(i>0?arr[i-1]:0)-1);
        cout<<res<<endl;
    }
    return 0;
}
