package main 

import "fmt"

func counter(x int, y int) int {
    while x <= 40 { // ERROR: 'while' should be replaced by 'for'
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