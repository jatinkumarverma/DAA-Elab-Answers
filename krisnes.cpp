#include <bits/stdc++.h>
using namespace std;
int T, n, m, pr[150010], l[150010], f[150010][2], a[4], b[4];
vector<int> E[150010];
void direction(int x,int c) {}
void pairs() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i <= n + 1; i++) E[i].clear(), pr[i] = 0, f[i][0] = f[i][1] = 0;
    for (int i = 1, u, v; i <= m; i++) {
        scanf("%d%d", &u, &v);
        if (u + 1 == v) pr[v] = 1;
        else E[v].push_back(u);
    }
    pr[1] = pr[n + 1] = 1;
    for (int i = 2; i <= n; i++) E[i].push_back(0), E[n + 1].push_back(i - 1);
    int L = 0, R = n + 1;
    while (L <= n && pr[L + 1]) L++;
    while (R && pr[R]) R--;
    if (R == 0) return printf("%lld\n", 1ll * n * (n - 1) / 2), void();
    for (int i = 1; i <= n; i++) l[i] = pr[i] ? l[i - 1] : i;
    f[L][0] = 1, f[L][1] = 2;
    for (int i = L; i <= n; i++)
        for (int u : E[i + 1])
            for (int k = 0; k < 2; k++)
                if (l[i] <= u + 1) f[i][k] |= f[u][k ^ 1];
    for (int i = L; i >= 1; i--)
        for (int u : E[i + 1])
            for (int k = 0; k < 2; k++)
                if (l[i] <= u + 1) f[u][k] |= f[i][k ^ 1];
    for (int i = 0; i < 4; i++) a[i] = b[i] = 0;
    for (int i = 0; i <= L; i++) a[f[i][0]]++;
    for (int i = R - 1; i <= n; i++) b[f[i][0]]++;
    long long ans = 0;
    for (int p = 0; p < 4; p++)
        for (int q = 0; q < 4; q++)
            if (p & q) ans += 1ll * a[p] * b[q];
    printf("%lld\n", ans - (L + 1 == R));
}
int main() {
    scanf("%d", &T);
    while (T--) pairs();
}
