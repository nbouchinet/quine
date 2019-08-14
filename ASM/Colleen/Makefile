all:
	nasm -f macho64 Colleen.s
	gcc -e _main Colleen.o -o Colleen
clean:
	rm -rf Colleen Colleen.o
