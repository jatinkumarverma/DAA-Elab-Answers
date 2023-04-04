#include <bits/stdc++.h>
using namespace std;
int main()
{
string name1, name2;
int shortestString[31][31]; 
long uniqueString[31][31]; 
cin>>name1>>name2;

name1.insert(0, "0");
name2.insert(0, "1"); 
for (int i = 0; i < 31; i++)
shortestString[0][i] = shortestString[i][0] = i, uniqueString[i][0] = uniqueString[0][i] = 1; 
  for (int i = 1;
       name1[i]; i++)
{
for (int j = 1;
     name2[j]; j++)
{
if (name1[i] == name2[j])
{
shortestString[i][j] = 1 + shortestString[i - 1][j - 1];


uniqueString[i][j] = uniqueString[i - 1][j - 1];


}
else
{
shortestString[i][j] = 1 + min(shortestString[i][j - 1], shortestString[i - 1][j]);


if (shortestString[i][j - 1] == shortestString[i - 1][j]) uniqueString[i][j] = uniqueString[i][j - 1] + uniqueString[i - 1][j];

else if (shortestString[i][j - 1] < shortestString[i - 1][j]) uniqueString[i][j] = uniqueString[i][j - 1];
else
uniqueString[i][j] = uniqueString[i - 1][j];
}
}
}
cout << shortestString[name1.length() - 1][name2.length() - 1] << " " << uniqueString[name1.length() - 1][name2.length() - 1] << "\n";


return 0;

}
