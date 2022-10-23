package main

import "fmt"

var p, f float64 = 1.0, 1.0

func TS(x float64, v float64) float64 {
	var r float64
	if v == 0 {
		return 1
	} else {
		r = TS(x, v-1)
		p = p * x
		f = f * v
		return r + (p / f)
	}
}

func main() {
	x := 1.0
	v := 10.00
	fmt.Printf("%2f\n", TS(x, v))
}
