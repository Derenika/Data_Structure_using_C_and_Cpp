// #include <stdio.h>
// void fun(int n)
// {
//     if (n > 0)
//     {
//         printf("%d", n);
//         fun (n-1);
//     }
// }
// int main ()
// {
//     fun(3);
//     return 0;
// }

// Using While loop 
#include <stdio.h>
void fun(int n)
{
    while (n > 0)
    {
        printf("%d", n);
        n--;
    }
}
int main ()
{
    fun(3);
    return 0;
}