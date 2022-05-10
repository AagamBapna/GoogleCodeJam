#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int N;
    cin>>N;
    vector<int> D;
    D.resize(N);
    for(int i=0; i<N; i++){
        cin>>D[i];
    }
    deque<int> d(D.begin(), D.end());
    int c = 0;
    int r = 0;
    for(int i=0; i<N; i++){
        int f = d.front(), b = d.back();
        if(f>=b){
            d.pop_back();
            if(b>=c){
                c = b;
                r++;
            }
        }
        else{
            d.pop_front();
            if(f>=c){
                c = f;
                r++;
            }
        }
    }
    return r;
}



int main(){
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        int r = solve();
        cout<<"Case #"<<i+1<<": "<<r<<endl;
    }
    return 0;
}
