#pendientes añadir ejs2.o ejs3.o ejs4.o ejs5.o ejs6.o ejs7.o ejs8.o
ejerciciosC: main.o ejs1.o 
	gcc main.o ejs1.o -o ejerciciosC

#dependencias main.o
main.o: ejerciciosC_main.o menu.o ejecutaEj.o
	gcc ejerciciosC_main.o menu.o ejecutaEj.o -o main.o

ejerciciosC_main.o: 0_menu_main/ejerciciosC_main.c
	gcc -c -o ejerciciosC_main.o 0_menu_main/ejerciciosC_main.c

menu.o: 0_menu_main/menu.c
	gcc -c -o menu.o 0_menu_main/menu.c

ejecutaEj.o: 0_menu_main/ejecutaEj.c
	gcc -c -o ejecutaEj.o 0_menu_main/ejecutaEj.c

#dependencias ejs1.o
ejs1.o: 1_operaciones/ej1Circulo.c
	gcc -c -o ejs1.o 1_operaciones/ej1Circulo.c 

clean:
	rm -f *.o
	rm -f ejerciciosC*