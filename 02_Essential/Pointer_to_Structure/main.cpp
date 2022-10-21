// #include <stdio.h>
// struct Rectangle
// {
//     int length;
//     int breadth;
// };
// int main ()
// {
//     struct Rectangle r = {10, 5};
//     struct Rectangle *p = &r;
    
//     p -> length = 20;
//     p -> breadth = 30;
    
//     int Area = p -> length * p -> breadth;
//     printf("%d",Area);
// }

#include <stdio.h>
#include <stdlib.h>
struct Rectangle
{
    int length;
    int breadth;
};
int main ()
{
    struct Rectangle *p; // Create a pointer variable
    p=(struct Rectangle *) malloc(sizeof (struct Rectangle)); //Allocating Memory in Heap
    
    p -> length=10;
    p -> breadth=5;

    int Area = p -> length * p -> breadth;
    printf("%d", Area);
}