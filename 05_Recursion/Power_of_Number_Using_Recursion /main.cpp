
// #include <stdio.h>
// int power(int v, int e) {
//     if (e == 0)
//        return 1;
//     return power(v, e - 1) * v;
// }
// int main() {
//     int v = 4, e = 3;
//     printf("%d", power(v, e));
// }


#include <stdio.h>
int power(int v, int e) {
    if (e == 0)
        return 1;
    if (e % 2 == 0)
       return power(v * v, e / 2);
    return v * power(v * v, (e - 1) / 2);
}
int main() {
    int x = 2, v = 9;
    printf("%d\n", power(x, v));
}

// Итаратирная рекурсия
// #include <stdio.h>

// void IterativePower(int nb, int power) { // если то что закоментированно то int не void
//     int result = 1;
//     while (power != 0) {
//         result *= nb;
//         --power;
//     }
// //     if (power < 0) 
// // 		return 0;
	
// // 	if (power == 0 )
// // 		return 1;
// // 	if (power > 0) {
// // 		for (int index = 1; index <= power; index++) {
// // 			result = result * nb;
// //         }
// // }
//     printf ("%d\n ", result);

// }

// int main() {

//     IterativePower(4 , 3);
//     return 0;
// }


