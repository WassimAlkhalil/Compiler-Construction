package main 

import "fmt"

type User struct {
	name string;
	age int;
	premium bool;
	payment string;
}

func main () int {
	var user User;
	user.premium = true;
	if user.premium {
		return 1; 
	} else {
		return 0;
	}

	if user.age < 18 {
		user.premium = false;
		// user.payment = "$0.00";
	}
	return 0;
}
