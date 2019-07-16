#include <stdio.h>

void func(void)
{
	return ;
}

/*
	out
*/
int	main(void) 
{
	/*
		in
	*/
	char *s;

	s = "#include <stdio.h>%1$c%1$cvoid func(void)%1$c{%1$c	return ;%1$c}%1$c%1$c/*%1c	out%1$c*/%1$cint	main(void) %1$c{%1$c	/*%1$c		in%1$c	*/%1$c	char *s;%1$c%1$c	s = %2$c%3$s%2$c;%1$c	func();%1$c	printf(s,10,34,s);%1$c}%1$c";
	func();
	printf(s,10,34,s);
}
