// #include <stdio.h>

// struct Rectangle
// {
//     int length;
//     int breadth;
// };

// int CalculateArea (struct Rectangle rect2)
// {
//     return rect2.length * rect2.breadth;
// }
// int main ()
// {
//     struct Rectangle rect1 = { 10, 5 };
//     printf ("%d\n", CalculateArea (rect1));
// }


// #include <iostream>
// using namespace std;
// struct Rectangle
// {
//     int length;
//     int breadth;
// };
// int CalculateArea (struct Rectangle &rect2)
// {
//     rect2.length = 20;
//     return rect2.length * rect2.breadth;
// }
// int main ()
// {
//     struct Rectangle rect1 = { 10, 5 };
//     printf ("%d", CalculateArea (rect1));
// }

// #include <stdio.h>
// struct Rectangle
// {
//     int length;
//     int breadth;
// };
// int CalculateArea (struct Rectangle rect2)
// {
//     rect2.length = 20;
//     rect2.breadth = 15;
//     return rect2.length * rect2.breadth;
// }
// int main ()
// {
//     struct Rectangle rect1 = { 10, 5 };
//     printf ("%d", CalculateArea (rect1));
// }

#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};

// void changelength(struct Rectangle *p)
// {
//     p->length = 20;
// }

// int main ()
// {
//     struct Rectangle r = { 10, 5 };
//     changelength(&r);
   
// }

void changeLength(struct Rectangle *p , int l)
{
 p -> length = l;
}
int main()
{
 struct Rectangle r = {10,5};
 changeLength(&r, 20);
}