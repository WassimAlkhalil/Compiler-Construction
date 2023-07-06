package main 

import "fmt"

Pet struct { // ERROR: should be "type Pet struct"
	name string;
	isDog bool;
	height bool;
}

func main() int {
	var p Pet;
	p.isDog = false;
	p.height = 30;
}

