package main

import "fmt"

//12 11 8 7 4 3

// func fun1(a int) {
// 	if a > 0 {
// 		fmt.Printf("%d ", a)
// 		fun2(a - 1)
// 	}
// }

// func fun2(b int) {
// 	if b > 0 {
// 		fmt.Printf("%d ", b)
// 		fun1(b - 3)
// 	}
// }
// func main() {
// 	v := 12
// 	fun1(v)
// }

//3 4 7 8 11 12

func fun1(a int) {
	if a > 0 {
		fun2(a - 1)
		fmt.Printf("%d ", a)
	}
}

func fun2(b int) {
	if b > 0 {
		fun1(b - 3)
		fmt.Printf("%d ", b)
	}
}
func main() {
	v := 12
	fun1(v)
}
