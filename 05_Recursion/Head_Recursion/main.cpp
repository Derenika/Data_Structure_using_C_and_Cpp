// #include <stdio.h>
// using namespace std;

// void fun2(int n){
//  if(n>0) {
//       fun2(n - 1);
//       printf("%d ", n);
//      }
// }

// int main(){
//  int x=3;
//  fun2(x);
//  return ;
// }

#include <stdio.h>
void fun(int n)
{
    int i = 1;
    while (i <= n)
    {
        printf ("%d ", i);
        i++;
    }
}
int main()
{
  fun (3);
  return 0;
}