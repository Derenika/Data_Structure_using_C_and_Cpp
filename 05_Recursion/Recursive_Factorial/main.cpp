// #include<iostream>
// using namespace std;

// int fun (int n) {
//     if (n == 0) //0!=1
//     return 1;
    
//     if (n == 1)
//     return 1;
    
//     return fun(n - 1) * n;    
// }

// int main (){
//     int a = 4;
//     printf ("%d\n", fun(a));
//     return 0;
// }

//Iteration
#include<iostream>
using namespace std;

int fun (int v) {
    if (v == 0) //0!=1
    return 1;
    
    if (v == 1)
    return 1;

    int v, fact;
    fact = 1;
    for (int i = 1; i <= v; i++) {
       fact = fact * i;
    } 
    return fact;
}

int main (){
    int a = 4;
    printf ("%d\n", fun(a));
    return 0;
}

