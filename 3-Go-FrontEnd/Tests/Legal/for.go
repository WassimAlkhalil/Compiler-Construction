package main

import "fmt"

func factorial (n int) int {
	var result int;
	if n == 0 {
		result = 1;
	} else {
		result = n * factorial(n-1);
	}
	return result;
}

func main () int {
	for i := 0; i < 10; i++ {
		var x int;
		x = factorial(i);
	}
	return 0;
}
