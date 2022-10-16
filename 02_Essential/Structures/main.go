package main

import "fmt"

type Rectangle struct {
	length, breadth int
}

func main() {
	r := Rectangle{10, 5}
	r.length = 20
	r.breadth = 10
	fmt.Printf("Area of Rectangle : %d\n", r.length*r.breadth)
	return
}
