#include "taches.h"
#include <stdio.h>

void ajouterTache(Tache *taches, int *nbTaches) {
    printf("Description de la tache : ");
    scanf(" %[^\n]s", taches[*nbTaches].description);
    printf("Priorite (A/B/C) : ");
    scanf(" %c", &taches[*nbTaches].priorite);
    do {
        printf("Date d'echeance (JJ/MM/AAAA) : ");
        scanf(" %s", taches[*nbTaches].date_echeance);
    } while (!dateValide(taches[*nbTaches].date_echeance));
    taches[*nbTaches].terminee = 0; // Par défaut, la tâche n'est pas terminée
    (*nbTaches)++;
}
