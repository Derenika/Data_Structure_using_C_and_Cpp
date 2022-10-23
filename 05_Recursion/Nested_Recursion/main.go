package main

import "fmt"

func nested(v int) int {
	if v > 100 {
		return v - 10
	} else {
		return nested(nested(v + 11))
	}
}
func main() {
	i := 98
	fmt.Printf("%d\n", nested(i))
}
