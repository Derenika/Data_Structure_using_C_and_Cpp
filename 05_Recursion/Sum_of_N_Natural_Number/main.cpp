// //sum of the first ‘N’ natural number by using a simple formula n * (n + 1) / 2

// #include <stdio.h>
// int sum(int v) {
//     return v * (v + 1) / 2;
// }
// int main() {
//     int v = 6;
//     printf("%d\n", sum(v));
// }

//Sum of First N Natural Number by using Loop

// #include <stdio.h>
// int main() {
//     int v, sum = 0;
//     v = 6;
//     for (int i = 1; i <= v; i++) {
//         sum = sum + i;
//     }
//     printf("%d\n", sum);
// }

// Sum of First N Natural Number by using Recursion
// #include <stdio.h>
// int sum(int v) {
//     if (v == 0)
//        return 0;
//     return sum(v - 1) + v;
// }
// int main() {
//     int v = 6;
//     printf("%d\n", sum(v));
// }


// Sum of N natural numbers
#include <stdio.h>
// int sum(int n)
// {
//  if(n==0)
//  return 0;
//  return sum(n-1)+n;
// }
int Isum(int n)
{
 int s=0,i;
 for(i=1;i<=n;i++)
 s=s+i;

 return s;
}
int main()
{
 int r=Isum(5);
 printf("%d ",r);
 return 0;
}