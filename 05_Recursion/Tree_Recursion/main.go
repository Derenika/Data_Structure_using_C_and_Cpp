package main
import "fmt"

func TreeRecursion(n int) {
	if n > 0 {
		fmt.Printf("%d\n", n)
		TreeRecursion(n - 1)
		TreeRecursion(n - 1)
	}
}
func main() {
	x := 3
	TreeRecursion(x)
}


