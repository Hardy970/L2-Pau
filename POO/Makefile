# CXX = g++
# CXXFLAGS = -std=c++98 -pedantic -Wall -Werror -g
# LDFLAGS=
# LDLIBS=
# RM=rm -fv
# all : main.out
# TP2.o:TP2.cxx
# 	$(CXX) $(CXXFLAGS) -c -o $@ $<
# main.out : TP2.cxx 
# 	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)
# clean:
# 	$(RM) *.o *.out
# Compilateur
CXX = g++

# Options de compilation
CXXFLAGS = -std=c++11 -pedantic -Wall -Werror -g

# Options d’édition de liens
LDFLAGS =
LDLIBS =

# Commande pour supprimer les fichiers
RM = del /q
#RM = rm -f


# Nom de l'exécutable
EXEC = TP2.exe

# Fichier source principal
SRC = TP2.cxx

# Fichier objet
OBJ = $(SRC:.cxx=.o)

# Règle principale
all: $(EXEC)

# Compilation du fichier source en objet
%.o: %.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Création de l'exécutable
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

# Nettoyage des fichiers objets et exécutables
clean:
	$(RM) *.o $(EXEC)

