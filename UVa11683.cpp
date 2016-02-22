#include <iostream>
#include <string.h>
#include <algorithm>
#include <map>
#include <cstdio>
using namespace std;

const int N = 12345;
int H, L;
int a[N], c[N];

int main() {
    freopen("test.inp", "r", stdin);
    while (true) {
        scanf("%d", &H);
        if (H == 0) break;
        scanf("%d", &L);

        int prev = H, rs = 0, x;
        for (int i = 1; i <= L; i ++) {
            scanf("%d", &x);
            if (prev > x) rs += prev - x;
            prev = x;
        }
        printf("%d\n", rs);
    }
    return 0;
}
