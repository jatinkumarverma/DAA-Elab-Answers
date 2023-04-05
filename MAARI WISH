#include <stdio.h>

int main() {
    int p, d, m, s;
    scanf("%d %d %d %d", &p, &d, &m, &s);
    
    int watches = 0; // number of watches bought
    // amount of money Maari has left
    
    while(p<=s) {
        s-= p;
        watches++;
        p = (p > m + d) ? p - d : m;
    }
    
    printf("%d\n", watches);
    
    return 0;
}
