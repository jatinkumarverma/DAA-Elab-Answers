#include <iostream>
using namespace std;
int main()
{
    int w,h,m;
    cin>>w>>h>>m;
    int i;
    if(!h){
        for(i=0;i<w;i++)cout<<"#\n";
        return 0;
    }
for(i=1;i<h-1;i++)cout<<"#\n";
cout<<"#";
for(int i=0;i<m/10;i++)cout<<".";
for(int i=h;i<=w;i++)cout<<"#";
    return 0;
}
