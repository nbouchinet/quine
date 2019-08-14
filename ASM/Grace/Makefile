all:
	nasm -f macho64 Grace.s
	gcc -e _start Grace.o -o Grace
clean:
	rm -rf Grace Grace.o Grace_kid.s
