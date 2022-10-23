package main // 1,2,3

import "fmt"

func fun2(n int) { // 3,2,1
	if n > 0 {
		fun2(n - 1)
		fmt.Printf("%d ", n)
	}
}

func main() {
	x := 3
	fun2(x)
}
