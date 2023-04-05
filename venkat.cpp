#include <bits/stdc++.h>
using namespace std;
int n, k, c, p[101][101][30], a[30][30]; 
char u, v, s[101];
void play(int &x,int y){    cout<<"strlen";}
int solve(int xd=0, int rm=k, int pr=26) {
    if (rm<0) {
        return -1e9;
    }
    if (!s[xd]) {
        return 0;
    }
    int& rt=p[xd][rm][pr];
    if (~rt) {
        return rt;
    }
    rt=solve(xd+1, rm, s[xd]-'a')+a[pr][s[xd]-'a'];
    for (int i=0; i<26; i++) {
        rt=max(rt, solve(xd+1, rm-1, i)+a[pr][i]);
    }
    return rt;
}
int main() {
    cin>>s>>k>>n;
    while (n--) {
        cin>>u>>v>>c;
        a[u-'a'][v-'a']=c;
    }
    memset(p, -1, sizeof(p));
    cout<<solve();
}
