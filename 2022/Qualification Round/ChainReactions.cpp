#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int n;
vector<deque<int>> tree;
vector<ll> fun;
vector<ll> s_fun;
vector<ll> t_fun;
deque<int> heads;

void update_node(int node){
    for(int child: tree[node]){
        update_node(child);
    }
    if(tree[node].size() == 0){
        s_fun[node] = 0;
        t_fun[node] = fun[node];
    }
    else{
        ll minf = LLONG_MAX;
        for(int child: tree[node]){
            s_fun[node] += s_fun[child];
            s_fun[node] += t_fun[child];
            minf = min(minf, t_fun[child]);
        }
        s_fun[node] -= minf;
        t_fun[node] = max(minf, fun[node]);
    }
}

void solve(){
    ll total = 0;
    for(int node: heads){
        update_node(node);
        total += s_fun[node];
        total += t_fun[node];
    }
    cout<<total<<endl;
}

int main(){
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>n;
        fun = vector<ll>(n);
        s_fun = vector<ll>(n);
        t_fun = vector<ll>(n);
        tree = vector<deque<int>>(n);
        heads = deque<int>();
        for(int j=0; j<n; j++){
            cin>>fun[j];
        }
        int p;
        for(int j=0; j<n; j++){
            cin>>p;
            if(!p) heads.push_back(j);
            else{
                tree[p-1].push_back(j);
            }
        }
        cout<<"Case #"<<i+1<<": ";
        solve();
    }
    return 0;
}
