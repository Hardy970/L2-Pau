#Linux
# # Définition du compilateur
# CC = g++

# # Options de compilation
# CFLAGS = -Wall -std=c++11

# # Liste des fichiers objets
# OBJ = main.o Shape.o ImplicitShape.o PointSet.o

# # Nom de l'exécutable final
# TARGET = program

# # Règle principale : génération de l'exécutable
# all: $(TARGET)

# $(TARGET): $(OBJ)
# 	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# # Compilation des fichiers source en fichiers objets
# %.o: %.cpp
# 	$(CC) $(CFLAGS) -c $< -o $@

# # Nettoyage des fichiers objets et de l'exécutable
# clean:
# 	rm -f $(OBJ) $(TARGET)

# Définition du compilateur (Assurez-vous que MinGW est installé)
CC = g++

# Options de compilation
CFLAGS = -Wall -std=c++11

# Liste des fichiers objets
OBJ = main.o Shape.o ImplicitShape.o PointSet.o

# Nom de l'exécutable final
TARGET = program.exe

# Règle principale : génération de l'exécutable
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Compilation des fichiers source en fichiers objets
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets et de l'exécutable
clean:
	del /Q $(OBJ) $(TARGET)

