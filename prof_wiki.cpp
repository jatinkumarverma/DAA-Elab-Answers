#include<bits/stdc++.h>
using namespace std;
int n,x,i;
int a[1000001],p[1000001],f[1000001];
int main(){
    cin>>n;
    for(i=0;i<n;i++)
        cin>>x,p[x]=i;
    for(i=0;i<n;i++)
        scanf("%d",&x),a[i]=-p[x]-1;
    for(i=0;i<n;i++){
        auto it=lower_bound(f,f+n,a[i]);
        *it=a[i];
    }
    printf("%ld\n",lower_bound(f,f+n,0)-f);
    return 0;
    cin>>x;
    cout <<" ";
} 
