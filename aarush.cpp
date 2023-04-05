#include<bits/stdc++.h>
using namespace std;
int h,q,v,e;string str;map<int,int> f;
double puzzle(int u,int mx) {return (f[u]<=mx)?mx:(0.5*(puzzle(u<<1,max(mx,f[u]-f[u<<1]))+puzzle(u<<1|1,max(mx,f[u]-f[u<<1|1]))));}
int main(){
cin>>h>>q;
    while (q--){
        cin>>str;
        if (str[0]=='a'){
            scanf("%d %d",&v,&e);
            while (v) f[v]+=e,v>>=1;
        }
        else printf("%.2lf\n",puzzle(1,0));
    }
    return 0;
}
