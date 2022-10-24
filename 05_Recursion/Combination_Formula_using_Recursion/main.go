// package main

// import "fmt"

// func Fact(n int) int {
// 	v := 1
// 	for i := 1; i <= n; i++ {
// 		v = v * i
// 	}
// 	return v
// }

// func NCR(n int, r int) int {
// 	var x1, x2, x3 int
// 	x1 = Fact(n)
// 	x2 = Fact(r)
// 	x3 = Fact(n - r)
// 	return x1 / (x2 * x3)
// }

// func main() {
// 	var n, r int
// 	n = 5
// 	r = 3
// 	fmt.Printf("%d \n", NCR(n, r))
// }

package main

import "fmt"

func NCR(n int, r int) int {
	if r == 0 || n == r {
		return 1
	} else {
		return NCR(n-1, r-1) + NCR(n-1, r)
	}
}
func main() {
	var n, r int
	n = 5
	r = 3
	fmt.Printf("%d \n", NCR(n, r))
}
