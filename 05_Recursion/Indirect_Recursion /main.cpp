// #include <stdio.h>
// void fun2(int b);

// void fun1(int a){
//     if (a > 0)
//     {
//         printf("%d\n", a);
//         fun2(a - 1);
//     }
// }

// void fun2(int b){
//     if(b > 0)
//     {
//         printf("%d\n", b);
//         fun1(b - 3);
//     }
// }

// int main (){
//     int v = 12; 
//     fun1 (v);
//     return 0;
// }

//3 4 7 8 11 12

#include <stdio.h>
void fun2(int b);

void fun1(int a){
    if (a > 0)
    {
        fun2(a - 1);
        printf("%d ", a);
    }
}

void fun2(int b){
    if(b > 0)
    {
        fun1(b - 3);
        printf("%d ", b);
    }
}

int main (){
    int v = 12; 
    fun1 (v);
    return 0;
}

