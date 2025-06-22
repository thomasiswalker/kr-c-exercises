// Exercise 1-2. Experiment to find out what happens when printf's argument string contains \x, 
// where x is some character not listed above (\n, \t, \\).

main()
{
	printf("hello, world \x");
}

// The following produces the following error message: error: \x used with no following hex digits    
