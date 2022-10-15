package main

import "fmt"

func main() {
	A := [5]int{1, 2, 3, 4, 5}
	for i := 0; i < 5; i++ {
		fmt.Printf("%d", A[i])
	}
	fmt.Println('n')
}
