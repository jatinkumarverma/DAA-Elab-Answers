#include<bits/stdc++.h>
using namespace std;
const int inf = 1012345678;
int A[309][309];
int H, W, K; bool ok[309][309][309];
int main() {
    int Q,rep;
    cin >> Q;
    for (rep = 1; rep <= Q; ++rep) {
        cin >> H >> W >> K;
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                int cl = inf, cr = -inf;
                for (int k = j; k < W; ++k) {
                    cl = min(cl, A[i][k]);
                    cr = max(cr, A[i][k]);
                    if (cr - cl <= K) {
                        ok[i][j][k] = true;
                    }
                    else {
                        ok[i][j][k] = false;
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < W; ++i) {
            for (int j = i; j < W; ++j) {
                int cont = 0;
                for (int k = 0; k < H; ++k) {
                    if (ok[k][i][j]) ++cont;
                    else cont = 0;
                    ans = max(ans, cont * (j - i + 1));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}