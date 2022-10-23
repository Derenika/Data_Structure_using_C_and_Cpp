// //sum of the first ‘N’ natural number by using a simple formula n * (n + 1) / 2

// package main
// import "fmt"

// func sum(v int) int {
// 	return v * (v + 1) / 2
// }
// func main() {
// 	v := 6
// 	fmt.Printf("%d\n", sum(v))
// }

//Sum of First N Natural Number by using Loop
// package main
// import "fmt"

// func main() {
// 	v, sum := 6, 0

// 	for i := 1; i <= v; i++ {
// 		sum = sum + i
// 	}
// 	fmt.Printf("%d\n", sum)
// }

// Sum of First N Natural Number by using Recursion

package main

import "fmt"

func sum(v int) int {
	if v == 0 {
		return 0
	}
	return sum(v-1) + v
}
func main() {
	v := 6
	fmt.Printf("%d\n", sum(v))
}
