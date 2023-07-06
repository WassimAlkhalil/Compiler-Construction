package main 

import "fmt"

func Add(a int, b int) int {
	var z = a + b;
	return z;
}

func main () int {
	var x, y int;
	x = 1;
	y = 2;

	var z int;
	z = Add(x, y);
	return 0;
}



