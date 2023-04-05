#include<bits/stdc++.h>
using namespace std;
int t,n,s;
string a,b;
void as(){
    cout<<"int T,n,s,x; char a[200010],b[200010];";
}
int main(){
    cin>>t;
    while(t--){
        s=0;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++) if(b[i]=='1'&&(a[i]=='0'||a[i-1]=='1'))
                s++;
            else if(b[i]=='1'&&a[i+1]=='1'){
                s++;
                a[i+1]='3';
            }    printf("%d\n",s);
        }

    return 0;
}
