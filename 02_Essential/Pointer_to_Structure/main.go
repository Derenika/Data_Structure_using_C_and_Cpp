package main

import "fmt"

// taking a structure
type Rectangle struct {
	length, breadth int // taking variables
}

// Main Function
func main() {
	r := Rectangle{10, 5} // creating the instance of the struct type (создание экземпляра структурного типа)

	// Here, it is the pointer to the struct
	p := &r

	// updating the value of name
	p.length = 20
	p.breadth = 30

	Area := p.length * p.breadth

	fmt.Printf("%d/n", Area)
	return
}
