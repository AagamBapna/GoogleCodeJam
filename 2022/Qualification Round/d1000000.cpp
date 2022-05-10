#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> s;

void solve(){
    int l=0;
    int num = 1;
    for(auto d : s){
        if(d>=num){
            l++; num++;
        }
    }
    cout<<l<<endl;
}

int main(){
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>n;
        s.resize(n);
        for(int j=0; j<n; j++){
            cin>>s[j];
        }
        sort(s.begin(),s.end());
        cout<<"Case #"<<i+1<<": ";
        solve();
    }
    return 0;
}
