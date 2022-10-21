// package main

// import "fmt"

// // This function accept
// // an array as an argument
// func fun(B []int, n int) int {
// 	var i int

// 	for i = 0; i < n; i++ {
// 		fmt.Printf("%d ", B[i])
// 	}

// 	return 0
// }

// // Main function
// func main() {

// 	// Creating and initializing an array
// 	var A = []int{2, 4, 6, 8, 10}

// 	// Passing an array as an argument
// 	fun(A, 5)

// }

// package main
// import "fmt"

// func fun(B *[]int) {
// 	for i := 0; i < len(*B); i++ {
// 		fmt.Printf("%d ", (*B)[i])
// 	}

// }

// func main() {

// 	A := []int{2, 4, 6, 8, 10}
// 	fun(&A)

// }

// package main

// import "fmt"

// func fun(B *[]int) {
// 	(*B)[0] = 20
// 	(*B)[2] = 30

// }

// func main() {

// 	A := []int{2, 4, 6, 8, 10}
// 	fun(&A)

// 	for i := 0; i < len(A); i++ {
// 		fmt.Printf("%d ", A[i])
// 	}
// 	// fmt.Println(A)

// }

// package main

// import "fmt"

// func fun(size int) []int {
// 	B := make([]int, size)
// 	for i := range B {
// 		B[i] = 0
// 	}
// 	return B
// }

// func main() {
// 	A := fun(5)
// 	fmt.Println(A) //[0 0 0 0 0]
// 	fmt.Printf("slice addr= %p, len= %d, cap= %d\n", &A, len(A), cap(A))
// 	//slice addr= 0xc0000a8018, len= 5
// }

// package main

// import "fmt"

// func fun(size int) []int {
// 	B := make([]int, size)
// 	for i := range B {
// 		B[i] = i + 1
// 	}
// 	return B
// }

// func main() {
// 	var A []int
// 	n := 5
// 	A = fun(n)
// 	for i := 0; i < n; i++ {
// 	}
// 	fmt.Println(A)
// }

package main

import "fmt"

type Rectangle struct {
	length, breadth int
}

func Area(r Rectangle) int {
	return r.length * r.breadth
}

func ChangeLength(p *Rectangle, l int) {
	(*p).length = l
}

func main() {
	r := Rectangle{10, 5}
	Area(r)
	ChangeLength(&r, 20)
	fmt.Printf("%d", Area(r)) //100
	return
}
