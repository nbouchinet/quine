#include <stdio.h>
/*
	comment
*/
#define HEY
#define FT(x)int main() { FILE* fp = fopen("Grace_kid.c", "w"); fprintf(fp,x,10,#x); }
FT("#include <stdio.h>%1$c/*%1$c	comment%1$c*/%1$c#define HEY%1$c#define FT(x)int main() { FILE* fp = fopen(\"Grace_kid.c\", \"w\"); fprintf(fp,x,10,#x); }%1$cFT(%2$s)%1$c")
