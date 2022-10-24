// package main

// import "fmt"
// var s float64

// func e(x float64, n float64) float64 {
// 	if n == 0 {
// 		return s
// 	} else {
// 		s = 1 + x*s/n
// 		return e(x, n-1)
// 	}
// }

// func main() {
// 	fmt.Printf("%2f \n", e(2, 10))
// }

package main

import "fmt"

var s float64 = 1

func e(x float64, n float64) float64 {
	var i float64
	var num float64 = 1.0
	var den float64 = 1.0

	for i = 1; i <= n; i++ {
		num *= x
		den *= i
		s += num / den
	}
	return s
}

func main() {
	fmt.Printf("%2f \n", e(1, 10))
}
