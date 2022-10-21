#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
    void Initialize (int l, int b)
    {
        length = l;
        breadth = b;
    }
    int Area ()
    {
        return length * breadth;
    }
    void ChangeLength (int l)
    {
        length = l;
    }
};
int main ()
{
    Rectangle r;
    r.Initialize (10, 5);
    r.Area ();
    r.ChangeLength (20);
     printf ("%d", r.Area () ); //100 
}

// #include <iostream>
// using namespace std;
// class Rectangle
// {
//     private:
//         int length;
//         int breadth;
//     public:
//     Rectangle (int l, int b)
//     {
//         length = l;
//         breadth = b;
//     }
//     int Area ()
//     {
//         return length * breadth;
//     }
//     void ChangeLength (int l)
//     {
//         length = l;
//     }
// };
// int main ()
// {
//     Rectangle r(10, 5);
//     r.Area ();
//     r.ChangeLength (20);
// }