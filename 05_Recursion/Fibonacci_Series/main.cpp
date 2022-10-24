// // Fibonacci Series By using Loop
// #include <stdio.h>
// void Fibonacci (int numberOfElements)
// {
//     int firstNumber = 0, SecondNumber = 1, nextNumber;
//     //First print first and second number
//     printf ("%d %d", firstNumber, SecondNumber);
//     //Starts the loop from 2 because 0 and 1 are already printed
//     for (int i = 2; i < numberOfElements; i++)
//     {
//         nextNumber = firstNumber + SecondNumber;
//         printf (" %d", nextNumber);
//         firstNumber = SecondNumber;
//         SecondNumber = nextNumber;
//     }
// }
// int main ()
// {
//     int numberOfElements;
//     printf("Enter the Length of the Fibonacci series: ");
//     scanf("%d", &numberOfElements);
//     if(numberOfElements < 2)
//     {
//         printf("Please Enter a number greater than two");
//     }
//     else
//     {
//         printf("The following is the Fibonacci series: ");
//         Fibonacci(numberOfElements);
//     }
    
//     return 0;
// }

// Recursive Approach to Print Fibonacci Series 
// #include <stdio.h>
// void FibonacciSeries(int firstNumber, int secondNumber, int counter, int number)
// {
//     printf ("%d ", firstNumber);
//     if (counter < number)
//     {
//         FibonacciSeries (secondNumber, firstNumber + secondNumber, counter + 1, number);
//     }
// }
// int main ()
// {
//     int numberOfElements;
//     printf ("Enter the Length of the Fibonacci series: ");
//     scanf ("%d", &numberOfElements);
//     if (numberOfElements < 2)
//     {
//         printf ("Please Enter a number greater than two");
//     }
//     else
//     {
//         printf ("The following is the Fibonacci series: ");
//         FibonacciSeries (0, 1, 1, numberOfElements);
//     }
//     return 0;
// }



// Array
#include <stdio.h>
int F[10];
int mfib(int n)
{
 if(n<=1)
 {
 F[n]=n;
 return n;
 }
 else
 {
 if(F[n-2]==-1)
 F[n-2]=mfib(n-2);
 if(F[n-1]==-1)
 F[n-1]=mfib(n-1);
 F[n]=F[n-2]+F[n-1];
 return F[n-2]+F[n-1];
 }
}
int main()
{
 int i;
 for(i=0;i<10;i++)
 F[i]=-1;

 printf("%d \n",mfib(7));
 return 0;
}