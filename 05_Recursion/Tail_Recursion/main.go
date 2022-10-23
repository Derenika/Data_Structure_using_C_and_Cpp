// package main
// import "fmt"

// func fun(n int) {
// 	if n > 0 {
// 		fmt.Printf("%d", n)
// 		fun(n - 1)
// 	}
// }

// func main() {
// 	fun(3)
// }

package main
import "fmt"

func fun(n int) {
	for n > 0 {
		fmt.Printf("%d", n)
		n--
	}
}

func main() {
	fun(3)
}

