#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	char *s;
	char *f;
	char *c;
	char *e;
	int i = 5;
#ifndef A
	asprintf(&f, "Sully_%i.c", --i);
#else
	asprintf(&f, "Sully_%i.c", i);
#endif
	asprintf(&e, "./Sully_%i", i);
	asprintf(&c, "gcc %s -o %s", f, e);
	FILE* fp = fopen(f, "w");
	s = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <unistd.h>%1$cint main(void)%1$c{%1$c	char *s;%1$c	char *f;%1$c	char *c;%1$c	char *e;%1$c	int i = %5$i;%1$c#ifndef A%1$c	asprintf(&f, %2$cSully_%3$ci.c%2$c, --i);%1$c#else%1$c	asprintf(&f, %2$cSully_%3$ci.c%2$c, i);%1$c#endif%1$c	asprintf(&e, %2$c./Sully_%3$ci%2$c, i);%1$c	asprintf(&c, %2$cgcc %3$cs -o %3$cs%2$c, f, e);%1$c	FILE* fp = fopen(f, %2$cw%2$c);%1$c	s = %2$c%4$s%2$c;%1$c	fprintf(fp,s,10,34,37,s,i);%1$c	fclose(fp);%1$c	system(c);%1$c	if (i > 0)%1$c		system(e);%1$c}%1$c";
	fprintf(fp,s,10,34,37,s,i);
	fclose(fp);
	system(c);
	if (i > 0)
		system(e);
}
