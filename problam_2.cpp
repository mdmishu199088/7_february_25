#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<int>a(n+1),b(m+5),v,ans;
    int l=0,ll=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    while(true){
        if(ll==m)break;
        if(l<n && a[l]<b[ll]){
            v.push_back(a[l]);
            l++;
        }
        else{
            ans.push_back(v.size());
            ll++;
        }
    }
    for(auto value:ans){
        cout<<value<<" ";
    }
    return 0;
}
