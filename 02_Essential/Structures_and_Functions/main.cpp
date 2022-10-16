#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
void Initialize (struct Rectangle *p, int l, int b)
{
    p->length = l;
    p->breadth = b;
    // (*p).length = l;
	// (*p).breadth = b;
}
int Area (struct Rectangle r)
{
    return r.length * r.breadth;
}
void ChangeLength (struct Rectangle *p, int l)
{
    p->length = l;
}
int main ()
{
    struct Rectangle r;
    Initialize (&r, 10, 5);
    Area (r);
    ChangeLength (&r, 20);
    printf ("%d", Area(r) ); //100 
}