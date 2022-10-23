#include <stdio.h>
int nested (int v) {
    if (v > 100)
        return v - 10;
    else
        return nested (nested (v + 11));
}
int main () {
    int i = 98; 
    printf ("%d", nested (i));
}