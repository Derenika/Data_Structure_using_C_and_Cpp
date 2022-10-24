// #include <stdio.h>
// int Fact(int n)
// {
//     int v = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         v = v * i;
//     }
//     return v;
// }
// int NCR(int n, int r)
// {
//   int x1, x2, x3;
//   x1 = Fact(n);
//   x2 = Fact(r);
//   x3 = Fact(n - r);
//   return x1 / (x2 * x3);
// }
// int main ()
// {
//     int n, r;
//     n = 5;
//     r = 3;
//     printf ("%d \n", NCR(n, r));
// }

#include <stdio.h>
int NCR (int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
        return NCR (n - 1, r - 1) + NCR (n - 1, r);
}
int main ()
{
    int n, r;
    n = 5;
    r = 3;
    printf ("%d \n", NCR (n, r));
}