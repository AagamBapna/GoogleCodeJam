#include <bits/stdc++.h>
using namespace std;


void p(int R, int C){
    cout<<"..";
    for(int i=0; i<C-1; i++){
        cout<<"+-";
    }
    cout<<"+\n";
    cout<<"..";
    for(int i=0; i<C-1; i++){
        cout<<"|.";
    }
    cout<<"|\n";
    for(int i=0; i<R-1; i++){
        for(int i=0; i<C; i++){
        cout<<"+-";
        }
        cout<<"+\n";
        for(int i=0; i<C; i++){
        cout<<"|.";
        }
        cout<<"|\n";
    }
    for(int i=0; i<C; i++){
        cout<<"+-";
    }
    cout<<"+"<<endl;
}

int main(){
    int T, R, C;
    cin>>T;
    for(int i=0; i<T; i++){
        cin >>R>>C;
        cout<<"Case #"<<i+1<<":\n";
        p(R,C);
    }
    return 0;
}
