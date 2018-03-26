#pendientes añadir ejs2.o ejs3.o ejs4.o ejs5.o ejs6.o ejs7.o ejs8.o
ejerciciosC: ejerciciosC_main.o menu.o ejecutaEj.o ejs1.o bin
	gcc -o bin/ejerciciosC obj/ejerciciosC_main.o obj/menu.o obj/ejecutaEj.o \
		obj/ejs1.o

#dependencias main.o
ejerciciosC_main.o: src/ejerciciosC_main.c src/headerMain.h obj
	gcc -c -o obj/ejerciciosC_main.o src/ejerciciosC_main.c

menu.o: src/menu.c src/headerMain.h obj
	gcc -c -o obj/menu.o src/menu.c

ejecutaEj.o: src/ejecutaEj.c src/headerMain.h obj
	gcc -c -o obj/ejecutaEj.o src/ejecutaEj.c

#Dependencias ejercicios
ejs1.o: src/1_operaciones/ej1Circulo.c src/1_operaciones/ejs1.h obj
	gcc -c -o obj/ejs1.o src/1_operaciones/ej1Circulo.c
obj:
	mkdir obj

bin:
	mkdir bin

run: bin/ejerciciosC
	bin/ejerciciosC

clean:
	rm -f obj/*.o
	rm -f bin/*.*
