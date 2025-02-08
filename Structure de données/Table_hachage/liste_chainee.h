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


// suppression du chaînon suivant à condition que :
//   - on a la garantie qu'il n'est pas au début de la liste concernée
//     (évident compte-tenu du but de cette fonction)
//   - le chaînon doit exister
// cette fonction effectue un 'free' sur le chaînon supprimé
void supprimer_chainon_suivant(chainon_t *c) {
    // cas particulier : il n'y a pas de suivant
    if (c->next == NULL) return;
    // cas général
    chainon_t *tmp = c->next;
    c->next = c->next->next;
    free(tmp);
}

#endif // LISTE_CHAINEE_H_INCLUDED
