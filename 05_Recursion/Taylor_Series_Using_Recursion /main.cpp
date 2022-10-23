
#include <cstdio>
double TS(int x, int v) {
     static double p = 1, f = 1;
     double r;
     if (v == 0)
         return 1;
     else {
         r = TS(x, v - 1);
         p = p * x;
         f = f * v;
         return r + (p / f);
     }
}
int main() {
    int x = 1, v = 10;
    printf("%2f\n", TS(x, v));
}

