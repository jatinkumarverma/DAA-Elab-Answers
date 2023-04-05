#include<bits/stdc++.h>
#define int long long
using namespace std;
int const M=5000000;int i,j,n,s,x,e[M+100],f[M+100],d[M+100];
signed main(){
cin>>n;
for (i=1;i<=n;i++) scanf("%lld",&x),f[x]++;
for (i=1;i<=M;i++)
for (j=i;j<=M;j+=i)
e[i]+=f[j];
for (i=M;i>0;i--){
for (s=0,j=i;j<=M;j+=i) s=max(s,d[j]-e[j]*i);
d[i]=e[i]*i+s;
} 
printf("%lld\n",d[1]);
return 0;
}
