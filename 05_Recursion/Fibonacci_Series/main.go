// package main

// import "fmt"

// func Fibonacci(index int) int {
// 	if index < 0 {
// 		return -1
// 	} else if index == 0 || index == 1 {
// 		return index
// 	}
// 	return Fibonacci(index-2) + Fibonacci(index-1)
// }

// func main() {
// 	var arg1 int
// 	fmt.Printf("Enter the element number in the fibonacci range: ")
// 	fmt.Scanf("%d \n", &arg1)
// 	fmt.Println(Fibonacci(arg1))
// }

// package main

// import (
// 	"fmt"
// )

// func Fibonacci(index int) int {
// 	var s int
// 	var t0, t1 int = 0, 1
// 	if index < 0 {
// 		return -1
// 	} else if index == 0 || index == 1 {
// 		return index
// 	}
// 	for i := 2; i <= index; i++ {
// 		s = t0 + t1
// 		t0 = t1
// 		t1 = s
// 	}
// 	return s
// }

// func main() {
// 	var arg1 int
// 	fmt.Printf("Enter the element number in the fibonacci range: ")
// 	fmt.Scanf("%d \n", &arg1)
// 	fmt.Println(Fibonacci(arg1))
// }

// package main

// import "fmt"

// func FibonacciSeries(firstNumber int, secondNumber int, counter int, number int) {
// 	fmt.Printf("%d ", firstNumber)

// 	if counter < number {
// 		FibonacciSeries(secondNumber, firstNumber+secondNumber, counter+1, number)
// 	}
// }
// func main() {
// 	var numberOfElements int
// 	fmt.Printf("Enter the Length of the Fibonacci series: ")
// 	fmt.Scanf("%d \n", &numberOfElements)

// 	if numberOfElements < 2 {
// 		fmt.Printf("Please Enter a number greater than two")
// 	} else {
// 		fmt.Printf("The following is the Fibonacci series: ")
// 		FibonacciSeries(0, 1, 1, numberOfElements)
// 	}
// 	fmt.Printf("\n")
// }

// Fibonacci Series By using Loop
// package main
// import "fmt"

// func Fibonacci(numberOfElements int) {
// 	var firstNumber int = 0
// 	var SecondNumber int = 1
// 	var nextNumber int
// 	//First print first and second number
// 	fmt.Printf("%d %d", firstNumber, SecondNumber)
// 	//Starts the loop from 2 because 0 and 1 are already printed
// 	for i := 2; i < numberOfElements; i++ {
// 		nextNumber = firstNumber + SecondNumber
// 		fmt.Printf(" %d", nextNumber)
// 		firstNumber = SecondNumber
// 		SecondNumber = nextNumber
// 	}
// }

// func main() {
// 	var numberOfElements int
// 	fmt.Printf("Enter the Length of the Fibonacci series: ")
// 	fmt.Scanf("%d", &numberOfElements)
// 	if numberOfElements < 2 {
// 		fmt.Printf("Please Enter a number greater than two")
// 	} else {
// 		fmt.Printf("The following is the Fibonacci series: ")
// 		Fibonacci(numberOfElements)
// 	}
// 	fmt.Printf("\n")
// }

// Array

package main

import "fmt"

var F [10]int

func mfib(n int) int {
	if n <= 1 {
		F[n] = n
		return n
	} else {
		if F[n-2] == -1 {
			F[n-2] = mfib(n - 2)
		}
		if F[n-1] == -1 {
			F[n-1] = mfib(n - 1)
			F[n] = F[n-2] + F[n-1]
		}
		return F[n-2] + F[n-1]
	}
}
func main() {

	for i := 0; i < 10; i++ {
		F[i] = -1
	}
	fmt.Printf("%d \n", mfib(7))
	return
}
