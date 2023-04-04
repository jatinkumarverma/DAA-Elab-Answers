#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while(t--){
cin>>n;
int a[n],b[n],sum=0;
for(int i = 0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];
sort(a,a+n);
sort(b,b+n);
for(int i=0;i<n;i++){
if(a[i]%b[n-i-1]==0 || b[n-i-1]%a[i]==0) sum++;
}
cout<<sum<<endl;
}
return 0;
}
