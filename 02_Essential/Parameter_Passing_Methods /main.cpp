// #include <stdio.h>

// void swap (int x, int y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
//     printf ("%d %d", x, y);
// }
// int main ()
// {
//     int a, b;
//     a = 10;
//     b = 20;
//     swap (a, b);
// }


#include <stdio.h>
void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main ()
{
    int a, b;
    a = 10;
    b = 20;
    swap (&a, &b);
    printf ("%d %d", a, b);
}

// #include <iostream>
// using namespace std;
// void swap (int &x, int &y)
// {
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
// }
// int main ()
// {
//     int a, b;
//     a = 10;
//     b = 20;
//     swap (a, b);
//     cout<<a;
//     cout<<b;
// }