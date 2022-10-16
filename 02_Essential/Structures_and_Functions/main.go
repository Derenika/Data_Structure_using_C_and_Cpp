package main

import "fmt"

type Rectangle struct {
	length, breadth int
}

func Initialize(p *Rectangle, l int, b int) {
	(*p).length = l
	(*p).breadth = b
}

func Area(r Rectangle) int {
	return r.length * r.breadth
}

func ChangeLength(p *Rectangle, l int) {
	(*p).length = l
}

func main() {
	r := Rectangle{}
	Initialize(&r, 10, 5)
	Area(r)
	ChangeLength(&r, 20)
	fmt.Printf("%d", Area(r)) //100
	return
}
