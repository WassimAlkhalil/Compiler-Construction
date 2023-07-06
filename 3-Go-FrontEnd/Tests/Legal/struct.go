package main 

import "fmt"

type Person struct {
	Name string;
	Age int;
	Employed bool;
}

func main() int {
	var p Person;
	p.Age = 30;
	p.Employed = true;
}

