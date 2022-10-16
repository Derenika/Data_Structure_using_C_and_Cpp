// #include <stdio.h>
// void fun (int B[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf ("%d", B[i]);
//     }
// }
// int main ()
// {
//    int A[5] = { 2, 4, 6, 8, 10 };
//    fun (A, 5);
// }

// // Can we write * instead of []?
// #include <stdio.h>
// void fun (int *B, int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf ("%d", B[i]);
//     }
// }
// int main ()
// {
//    int A[5] = { 2, 4, 6, 8, 10 };
//    fun (A, 5);
// }

// // Var 3
// #include <stdio.h>
// void fun (int *B)
// {
//     B[0] = 20;
//     B[2] = 30;
// }
// int main ()
// {
//     int A[5] = { 2, 4, 6, 8, 10 };
//     fun (A);
//     for (int i = 0; i < 5; i++)
//     {
//         printf ("%d ", A[i]);
//     }
// }

// // Var 4
// #include <stdio.h>
// #include <stdlib.h>
// int* fun(int n)
// {
//     int *p;
//     p = (int *) malloc (n * sizeof (int));
//     return (p);
//  }
// int main ()
// {
//     int *A;
//     A = fun (5);
//     printf ("addr= %p sizeof= %lu ", A, sizeof(A)); 
//     //addr= 0x55c5f6bcf2a0 sizeof= 8
// }

// Var 5

#include <stdio.h>
#include <stdlib.h>
int* fun(int size)
{
    int *B;
    B = new int [size];
    for (int i = 0; i < size; i++)
    B[i]=i+1; // 1 2 3 4 5
    return B;
 }
int main ()
{
    int *A, n=5; 
    // меняешь параметр n меняется длинна массива
    A = fun (n);
    for (int i = 0; i < n; i++)
    printf ("%d ", A[i]); 
   
    return 0;
}


