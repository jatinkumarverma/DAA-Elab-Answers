#include<bits/stdc++.h>
using namespace std;
void mand()
{
    int n=6,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<6;j++)
        {
            break;
        }
    }
    for(j=0;j<3;j++)
        break;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        if(p+b+c>(p+q+r)/2 or a+q+c>(p+q+r)/2 or  a+b+r>(p+q+r)/2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    mand();
}
