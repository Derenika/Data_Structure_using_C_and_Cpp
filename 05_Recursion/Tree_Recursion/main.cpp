#include <stdio.h>

void TreeRecursion(int n) {
    if (n > 0) {
       printf("%d\n", n);
       TreeRecursion(n - 1);
       TreeRecursion(n - 1);
    }
}
int main() {
    int x = 3; 
    TreeRecursion(x);
}

