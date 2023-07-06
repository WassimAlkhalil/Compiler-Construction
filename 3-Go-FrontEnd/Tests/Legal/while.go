package main 

import "fmt"

func counter(x int, y int) int {
    for x <= 40 {
        x += 1;
    }
	var result int;
	if x == 40 {
		result = x / y;
	} 
    return result;
}

func main() {
    var x, y int;
	x = 30;
	y = 2;
	var divideByTwo = counter(x, y);
}