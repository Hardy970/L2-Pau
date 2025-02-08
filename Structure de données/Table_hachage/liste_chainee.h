#ifndef LISTE_CHAINEE_H_INCLUDED
#define LISTE_CHAINEE_H_INCLUDED

typedef struct chainon {
    char * data;
    struct chainon* next;
} chainon_t;

typedef chainon_t* liste_t;

chainon_t * ajouter_chainon(char * valeur, liste_t * l) {
    chainon_t *c = malloc(sizeof(chainon_t));
    if (c == NULL) return NULL;
    c->data = valeur; // (*c).data = valeur;
    c->next = *l;     // (*c).next = *l;
    *l = c;
    return c;
}

void afficher_liste(liste_t l) {
    chainon_t *c = l;
    while (c != NULL) {
        printf("%s ", c->data);
        c = c -> next;
    }
    printf("\n");
}

liste_t creer_liste(int n) {
    liste_t l = NULL;
    for (int i=n; i > 0; i--) {
        ajouter_chainon(i, &l);
    }
    return l;
}


// suppression du cha�non suivant � condition que :
//   - on a la garantie qu'il n'est pas au d�but de la liste concern�e
//     (�vident compte-tenu du but de cette fonction)
//   - le cha�non doit exister
// cette fonction effectue un 'free' sur le cha�non supprim�
void supprimer_chainon_suivant(chainon_t *c) {
    // cas particulier : il n'y a pas de suivant
    if (c->next == NULL) return;
    // cas g�n�ral
    chainon_t *tmp = c->next;
    c->next = c->next->next;
    free(tmp);
}

#endif // LISTE_CHAINEE_H_INCLUDED
