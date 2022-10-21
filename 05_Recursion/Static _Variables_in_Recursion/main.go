package main

import "fmt"

// Declare var x at global scope
var x int

func fun(n int) int {
	if n > 0 {
		x = x + 1
		return fun(n-1) + x
	}
	return 0
}

func main() {
	a := 5
	fmt.Println(fun(a))
}
