#include <bits/stdc++.h>
using namespace std;

int c1, m1, Y1, k1;
int c2, m2, Y2, k2;
int c3, m3, Y3, k3;

void solve(){
    int c = min({c1,c2,c3});
    int m = min({m1,m2,m3});
    int y = min({Y1,Y2,Y3});
    int k = min({k1,k2,k3});
    if(c+m+y+k < 1000000){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    if(c+m >= 1000000){
        m = 1000000-c;
        y=0; k=0;
    }
    else if(c+m+y >= 1000000){
        y = 1000000-c-m;
        k = 0;
    }
    else{
        k = 1000000-c-m-y;
    }
    cout<<c<<" "<<m<<" "<<y<<" "<<k<<endl;
}

int main(){
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>c1>>m1>>Y1>>k1;
        cin>>c2>>m2>>Y2>>k2;
        cin>>c3>>m3>>Y3>>k3;
        cout<<"Case #"<<i+1<<": ";
        solve();
    }
    return 0;
}
