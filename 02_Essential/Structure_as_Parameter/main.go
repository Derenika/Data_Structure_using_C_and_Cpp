// package main

// import "fmt"

// type Rectangle struct {
// 	length, breadth int
// }

// func CalculateArea(rect2 Rectangle) int {
// 	return rect2.length * rect2.breadth
// }

// func main() {
// 	rect1 := Rectangle{10, 5}
// 	fmt.Println(CalculateArea(rect1))

// 	return
// }

package main

import "fmt"

type Rectangle struct {
	length, breadth int
}

func CalculateArea(rect2 *Rectangle) int {
	rect2.length = 20
	return rect2.length * rect2.breadth
}

func main() {
	rect1 := Rectangle{10, 5}
	fmt.Println(CalculateArea(&rect1))
	fmt.Printf("%d", rect1) //{20 5}
	return
}
