#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int l=0,r=n-1,x=0;
        int v=n/2;
        while(v--){
            if(s[l]=='0' && s[r]=='1'){
                x++;
            }
            else if(s[l]=='1' && s[r]=='0'){
                x++;
            }
            else break;
            l++,r--;
        }
        cout<<n-x*2<<endl;
    }
    return 0;
}
