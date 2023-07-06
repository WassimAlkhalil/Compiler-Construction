func Add(a int, b int) int {
	var z = a + b;
	return z;
}

func main () {
	const var x,y = 20,30; // ERROR: 'var' should not be present when declaring constants
	var sum int = Add(x,y);
}