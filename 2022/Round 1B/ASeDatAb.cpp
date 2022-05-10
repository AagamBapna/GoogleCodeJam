#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    cout<<"00000000"<<endl;
    int N;
    for(int i=0; i<400; i++){
        cin>>N;
        if(N == -1){
            exit(1);
        }
        else if(!N){
            return;
        }
        switch(N){
            case 1:
                cout<<"10000000"<<endl;
                break;
            case 2:
                cout<<"11000000"<<endl;
                break;
            case 3:
                cout<<"11100000"<<endl;
                break;
            case 4:
                cout<<"11110000"<<endl;
                break;
            case 5:
                cout<<"11111000"<<endl;
                break;
            case 6:
                cout<<"11111100"<<endl;
                break;
            case 7:
                cout<<"11111110"<<endl;
                break;
            case 8:
                cout<<"11111111"<<endl;
                break;
        }
    }
}



int main(){
    int T;
    cin>>T;
    for(int i=0; i<T; i++){
        solve();
    }
    return 0;
}
