# Compilador a utilizar
CC = g++

# Flags que se le pasaran al compilador
CFLAGS = -ggdb3 -O0 -std=c++11 -Wall -Werror

# Nombre del ejecutable
EXE = rectangle

# headers
HDRS = Rectangle.h

# lista de bibliotecas para el linker
LIBS = 

# codigos de fuente a utilizar
SRCS = Rectangle.cpp rectangle_main.cpp

# Generar automaticamente lista de archivos objeto
OBJS = $(SRCS:.cpp=.o)

# default target
$(EXE): $(OBJS) $(HDRS) Makefile
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

# dependendencias
$(OBJS): $(HDRS) Makefile

#Limpiar
clean:
	rm -f $(EXE) *.o

