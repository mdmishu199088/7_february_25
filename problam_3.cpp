#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<int>a(n+5),b(m+5);
    set<int>s;
    map<int,int>mp,pm;
    long long int ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
         s.insert(a[i]);
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
        ans+=mp[b[i]];
    }
    cout<<ans;
    return 0;
}
