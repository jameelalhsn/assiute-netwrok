#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) a.begin(),a.end()
void solve() {
    int n,x;
    cin>>n;
    vector<int>a(n);
    bool val = true;
    for(int i = 0;i<n;i++){
        cin>>x;
        if(i&&(x==1||a[x-2]==0)&&(x==n||a[x]==0))val=false;
        a[x-1]=1;
    }
    cout<<(val?"YES\n":"NO\n");
}
int main() {
    int t=1;
    cin >> t;
    while (t--)solve();
}