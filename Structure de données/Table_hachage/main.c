

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include "hachage_avec_liste_chainee.h"
//#include "Table_hachage_sondage.h"




int main(void) {
    /*liste_t l = NULL;
    ajouter_chainon("chien", &l);
    ajouter_chainon("chat", &l);
    ajouter_chainon("loup", &l);
    ajouter_chainon("lion", &l);
    afficher_liste(l);*/
    table_hachage table= creer_table(10);
    table_ajout("hardy", &table);
    table_ajout("bonjour", &table);
    table_ajout("chat", &table);
    table_ajout("chien", &table);
    table_ajout("rat", &table);
    //table_ajout("bat", &table);
    //table_ajout("uii", &table);
    //table_ajout("bonsoir", &table);
    afficher_table(table);

    supprimer_element(&table, "chat");
    printf("Apres suppression ...\n\n");
    afficher_table(table);
}
