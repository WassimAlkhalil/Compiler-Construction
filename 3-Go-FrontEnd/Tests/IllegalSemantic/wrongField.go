type Person struct {
	Name string;
	Age int;
	Employed bool;
}

func main () int {
	var p Person;
	p.Siblings = 1; // no such field
	return 0;
}