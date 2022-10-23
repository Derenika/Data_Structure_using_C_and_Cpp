// Recursion

package main

import "fmt"

func fun(n int) int {
	if n == 0 { //0!=1
		return 1
	}
	if n == 1 {
		return 1
	}
	return fun(n-1) * n
}

func main() {
	a := 4
	fmt.Println(fun(a))
}

// //Iteration

// package main

// import "fmt"

// func fun(v int) int {
// 	if v == 0 { //0!=1
// 		return 1
// 	}
// 	if v == 1 {
// 		return 1
// 	}

// 	fact := 1
// 	for i := 1; i <= v; i++ {
// 		fact = fact * i
// 	}
// 	return fact
// }

// func main() {
// 	a := 4
// 	fmt.Println(fun(a))
// }
