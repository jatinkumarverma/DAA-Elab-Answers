#include <iostream>
int main()
{
int n,i,j,k;
int b[100];
int a[100];
std::cin>>n;
for(i=0;i<n;i++)
std::cin>>a[i];
for(i=0;i<n;i++)

std::cin>>b[i];
for(i=0;i<n;i++)
if(a[i]==0)
j=i;
for(i=0;i<n;i++)
if(b[i]==0)
k=i;
if(j==k)
std::cout << "YES"; else
std::cout << "NO";
return 0;
}
