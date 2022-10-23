// package main

// import "fmt"

// func IterativePower(nb int, power int) int {
// 	result := 1
// 	for power != 0 {
// 		result *= nb
// 		power--
// 	}
// 	return result
// 	// if power < 0 {
// 	// 	return 0
// 	// }
// 	// if power == 0 {
// 	// 	return 1
// 	// }
// 	// result := 1
// 	// if power > 0 {
// 	// 	for index := 1; index <= power; index++ {
// 	// 		result = result * nb
// 	// 	}
// 	// }
// 	// return result
// }

// func main() {
// 	fmt.Println(IterativePower(4, 3))
// }

package main

import "fmt"

func power(v int, e int) int {
	if e == 0 {
		return 1
	}
	if e%2 == 0 {
		return power(v*v, e/2)
	}
	return v * power(v*v, (e-1)/2)
}
func main() {
	x := 2
	v := 9
	fmt.Printf("%d\n", power(x, v))
}

// package main

// import "fmt"

// func main() {

// 	fmt.Println(RecursivePower(4, 3))
// }

// func RecursivePower(nb int, power int) int {
// 	if power < 0 {
// 		return 0
// 	} else if power == 0 {
// 		return 1
// 	} else if power == 1 {
// 		return nb
// 	} else if power > 0 {
// 		return nb * RecursivePower(nb, power-1)
// 	}
// 	return 1
// }
