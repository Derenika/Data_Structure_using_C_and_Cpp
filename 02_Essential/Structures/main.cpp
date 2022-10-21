#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle 
{
    int length; 
    int breadth;
};



int main ()
{
    struct Rectangle r1={10,5};    // declaring a variable of type structure

    printf("sizeof bytes, %lu\n", sizeof(r1));
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    r1.length =7;
    r1.breadth=3;
  
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    return 0;
    
}