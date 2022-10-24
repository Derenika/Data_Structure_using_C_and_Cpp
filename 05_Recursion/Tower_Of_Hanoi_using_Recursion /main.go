package main

import "fmt"

func TH(num int, x int, y int, z int) {
	if num > 0 {
		TH(num-1, x, z, y)

		fmt.Printf("From %d to %d \n", x, z)
		TH(num-1, y, x, z)
	}
}
func main() {
	var numOfDisc int = 3
	var tower1, tower2, tower3 int = 1, 2, 3
	TH(numOfDisc, tower1, tower2, tower3)
}
