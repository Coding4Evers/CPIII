#include <iostream>
#include <cstdio>

using namespace std;
double H, U, D, F;
int main() {
  //  freopen("test.inp", "r", stdin);
    while (true) {
        scanf("%lf %lf %lf %lf", &H, &U, &D, &F);
        if (H == 0) break;
        double down = U * F / 100.0, curH = 0;
        int time = 0;
        while (true) {
            if (U > 0) curH += U;
            if (curH > H) {
                cout << "success on day " << ++ time << endl;
                break;
            }
            curH -= D;
            if (curH < 0) {
                cout << "failure on day " << ++ time << endl;
                break;
            }
            U -= down;
            ++ time;
        }
    }
    return 0;
}
