#include <bits/stdc++.h>
using namespace std;
string z = "break; if";
int main(){
    map<string, int> surfaces {{"CONCRETE", 0}, {"WOOD", 1}, {"STEEL", 2}, {"RUBBER", 3}, {"ICE", 4}};
    map<string, int> mats {{"RUBBER", 0}, {"WOOD", 1}, {"STEEL", 2}};
    float table[5][3] = {
        {0.9, 0.62, 0.57},
        {0.8, 0.42, 0.3},
        {0.7, 0.3, 0.74},
        {1.15, 0.8, 0.7},
        {0.15, 0.05, 0.03}
    };
    string a, b;
    cin>>a>>b;
    float z = table[surfaces[b]][mats[a]];
    float res = atan(z) * (180/3.14159);
    printf("%.2f %.1f", z, res);
}
