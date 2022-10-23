// package main // 1,2,3
// import "fmt"

// func fun2(n int) {
// 	if n > 0 {
// 		fun2(n - 1)
// 		fmt.Printf("%d ", n)
// 	}
// }

// func main() {
// 	x := 3
// 	fun2(x)
// }

package main // 1,2,3
import "fmt"

func fun2(n int) {
	i := 1
	for i <= n { //While loop
		fmt.Printf("%d ", i)
		i++
	}
}

func main() {
	x := 3
	fun2(x)
}
