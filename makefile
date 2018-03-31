OBJSLIB1= objs/ej1Circulo.o objs/ej2Calculos.o objs/ej3CapitalBanco.o
# Montar ejecutable con libreria. orden importante (-o al principio falla) -I(carpetaheader) -L(carpetaLibreria) -l(nombreLibreria-sin lib .a) 
all: src/ejerciciosC_main.c src/menu.c src/ejecutaEj.c libTotal.a
	gcc src/ejerciciosC_main.c src/menu.c src/ejecutaEj.c -Ilibs -Llibs -lTotal -o bin/main


# Montar libreria total
libTotal.a: STRUCT libs/totalEjercicios.h LIB1
	ar rcs libs/libTotal.a $(OBJSLIB1)

 # Crear todos los archivos obj de las bibliotecas
LIB1: STRUCT src/1_Operaciones/ej1Circulo.c src/1_Operaciones/ej2Calculos.c src/1_Operaciones/ej3CapitalBanco.c
	gcc -c src/1_Operaciones/ej1Circulo.c -o objs/ej1Circulo.o
	gcc -c src/1_Operaciones/ej2Calculos.c -o objs/ej2Calculos.o
	gcc -c src/1_Operaciones/ej3CapitalBanco.c -o objs/ej3CapitalBanco.o

# Crear esqueleto proyecto
STRUCT:
	mkdir -p src
	mkdir -p bin
	mkdir -p objs
