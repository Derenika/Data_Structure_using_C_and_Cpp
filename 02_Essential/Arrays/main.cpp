#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
     int A[5]={1,2,3,4,5};
     int i;
     for(i=0; i<5; i++)
     {
        printf("%d",A[i]);
     }
cout<<endl;
return 0;
}





// #include <iostream>
// #include <stdio.h>
// using namespace std;
// int main ()
// {
// // int A[5]; // [0, 1, 2, 3, 4]
// // A[0]=12; // this is how we can store the elements at each index in array
// // A[1]=15;
// // A[2]=25;
// // A[3]=11;
// // A[4]=16;// такая запись элементов в масив выдает хоотичные цифры в те элементы которые не записаны в этом случае 3 и 4

// int A[5]={2,4,6,8,7};
// // int A[]={2,4,6,8,7};
// // int A[10]={2,4}; // лучше использовать такую запись тогда неуказанные элементы запишутся как 0

// // for(int i=0; i<5; i++){
// //     cout<<A[i]<<endl;
// // }

// for(int x:A){
//     cout<<x<<endl;
// }
// cout<<sizeof(A)<<endl; // this array will take mempry depends on the size of integer 
// // compilers take 4 bytes for integer 4 * 5 elements = 20 bytes

// cout<<A[1]<<endl;
// printf("%d\n", A[2]);
// return 0;
// }