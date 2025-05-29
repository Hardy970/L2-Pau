/*
   Commande de compilation depuis Vim :
   µ-cmd:!export myfile="%"; gcc -o "${myfile\%.c}" %; `realpath "${myfile\%.c}"`
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

typedef struct {
    char * current_state;
    char symbol;
    char * next_state;
} transition;

typedef struct {
    char * init_state;
    transition * rules;
    int nbr_transitions;
    char ** accepting_states;
} automate;


bool check(automate x, char * word) {
    char *st = x.init_state;
    int i;
    while (*word != '\0') {
        for (i=0; i < x.nbr_transitions; i++) {
            if ((strcmp(st, x.rules[i].current_state) == 0)
                     && (*word == x.rules[i].symbol)) {
                st = x.rules[i].next_state;
                break;
            }
        }
        if (i == x.nbr_transitions) return false;
        word++;
    }
    char **t =x.accepting_states;
    while(*t != NULL) {
        if (strcmp(st, *t) == 0) return true;
        t++;
    }
    return false;
}


void submit(automate A, char * word) {
    fprintf(stdout, "\"%s\" --> %d\n", word, check(A, word));
}



/*int main(void) {
    transition transitions[] = {
        {"q0", 'a', "q0"},
        {"q0", 'b', "q1"},
        {"q1", 'a', "q2"},
        {"q2", 'a', "q2"}
    };

    char *accepting_states[] = {"q2", NULL};

    automate A = {
        "q0",
        transitions,
        sizeof(transitions) / sizeof(transition),
        accepting_states
    };

    submit(A, "aaa");
    submit(A, "aba");
    submit(A, "abba");
    submit(A, "abaa");
    submit(A, "ab");
    //10- comportant un seul b et se terminant par a
}*/

//11
/*int main(void) {
    transition transitions[] = {
        {"q0", '0', "q1"},
        {"q0", '1', "q2"},
        {"q1", '1', "q3"},
        {"q2", '0', "q4"},
        {"q3", '0', "q1"},
        {"q4", '1', "q2"}
    };

    char *accepting_states[] = {"q2","q1","q3","q4",NULL};

    automate A = {
        "q0",
        transitions,
        sizeof(transitions) / sizeof(transition),
        accepting_states
    };

    submit(A, "1000");
    submit(A, "101010");
    submit(A, "01");
    submit(A, "10");
    submit(A, "011");
    submit(A, "11");


}*/


//12

/*int main(void) {
    transition transitions[] = {
        {"q0", 'x', "q1"},
        {"q0", 'y', "q0"},
        {"q1", 'x', "q2"},
        {"q1", 'y', "q0"},
        {"q2", 'y', "q3"},
        {"q3", 'y', "q3"},
        {"q3", 'x', "q1"}

    };

    char *accepting_states[] = {"q0","q1","q2","q3",NULL};

    automate A = {
        "q0",
        transitions,
        sizeof(transitions) / sizeof(transition),
        accepting_states
    };

    submit(A, "xxy");
    submit(A, "x");
    submit(A, "y");
    submit(A, "xyyyyyyyxyyxxyxxy");
    submit(A, "xxxxx");
    submit(A, "xyxxyyyy");


}*/

// 13

int main(void) {
    transition transitions[] = {
        {"q0", '0', "q1"},
        {"q0", '1', "q0"},
        {"q1", '0', "q1"},
        {"q1", 'y', "q0"},
        {"q2", 'y', "q3"},
        {"q3", 'y', "q3"},
        {"q3", 'x', "q1"}

    };

    char *accepting_states[] = {"q1",NULL};

    automate A = {
        "q0",
        transitions,
        sizeof(transitions) / sizeof(transition),
        accepting_states
    };

    submit(A, "xxy");
    submit(A, "x");
    submit(A, "y");
    submit(A, "xyyyyyyyxyyxxyxxy");
    submit(A, "xxxxx");
    submit(A, "xyxxyyyy");


}

