OBJSLIB1= objs/ej1Circulo.o objs/ej2Calculos.o objs/ej3CapitalBanco.o
# Motar ejecutable
all: src/ejerciciosC_main.c src/menu.c src/ejecutaEj.c libTotal.a
	gcc src/ejerciciosC_main.c src/menu.c src/ejecutaEj.c -Ilibs -Llibs -lTotal -o main


# Montar libreria total
libTotal.a: STRUCT libs/totalEjercicios.h LIB1
	ar rcs libs/libTotal.a $(OBJSLIB1)

 # Crear todos los archivos obj de las bibliotecas
LIB1: STRUCT src/1_Operaciones/ej1Circulo.c src/1_Operaciones/ej2Calculos.c src/1_Operaciones/ej3CapitalBanco.c
	gcc -c src/1_Operaciones/ej1Circulo.c -o objs/ej1Circulo.o
	gcc -c src/1_Operaciones/ej2Calculos.c -o objs/ej2Calculos.o
	gcc -c src/1_Operaciones/ej3CapitalBanco.c -o objs/ej3CapitalBanco.o

STRUCT:
	mkdir -p src
	mkdir -p bin
	mkdir -p objs
	mkdir -p libs/1_Operaciones
	mkdir -p libs/2_Decisiones_y_bucles
	mkdir -p libs/3_Funciones
	mkdir -p libs/4_Arrays
	mkdir -p libs/5_Strings
	mkdir -p libs/6_Arrays_Strings_y_funciones
	mkdir -p libs/7_Matrices
	mkdir -p libs/8_Structs