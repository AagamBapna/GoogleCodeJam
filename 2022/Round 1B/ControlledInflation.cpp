#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    int N, P;
    cin>>N>>P;
    vector<int> maxv;
    vector<int> minv;
    maxv.resize(N);
    minv.resize(N);
    for(int i=0; i<N; i++){
        cin>>maxv[i];
        minv[i] = maxv[i];
        int t;
        for(int j=0; j<P-1; j++){
            cin>>t;
            maxv[i] = max(t, maxv[i]);
            minv[i] = min(t, minv[i]);
        }
    }
    vector<ll> rmaxe(N);
    vector<ll> rmine(N);
    rmaxe[0] = maxv[0];
    rmine[0] = maxv[0] + maxv[0] - minv[0];
    for(int i=1; i<N; i++){
        rmaxe[i] = (maxv[i]-minv[i]) + min(rmaxe[i-1] + abs(minv[i]-maxv[i-1]), rmine[i-1] + abs(minv[i]-minv[i-1]));
        rmine[i] = (maxv[i]-minv[i]) + min(rmaxe[i-1] + abs(maxv[i]-maxv[i-1]), rmine[i-1] + abs(maxv[i]-minv[i-1]));
    }
    return min(rmaxe[N-1], rmine[N-1]);
}



int main(){
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        ll r = solve();
        cout<<"Case #"<<i+1<<": "<<r<<endl;
    }
    return 0;
}
