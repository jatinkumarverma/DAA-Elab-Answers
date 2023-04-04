#include <stdio.h>
#include <string.h>
int main()
{
int i,n,l,sum,d;
char str[50];
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=0;
scanf("%d",&l);
printf("Line %d:\n",i+1);
while(l--)
{
scanf("%s",str);
if(strcmp(str,"donate")==0)
{
scanf("%d",&d);
sum=sum+d;
}
else
{
printf("%d\n",sum);
}
}
}
return 0;
}
