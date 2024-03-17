#include "taches.h"

void supprimerTache(Tache *taches, int *nbTaches) {
    int choix;
    if (*nbTaches == 0) {
        printf("Aucune tache pour le moment.\n");
        return;
    }
    printf("Entrez le numero de la tache que vous souhaitez supprimer : ");
    scanf("%d", &choix);
    if (choix > 0 && choix <= *nbTaches) {
        // Décalage des éléments pour supprimer la tâche choisie
        for (int i = choix - 1; i < *nbTaches - 1; i++) {
            taches[i] = taches[i + 1];
        }
        (*nbTaches)--;
        printf("La tache a ete supprimee.\n");
    } else {
        printf("Numero de tache invalide.\n");
    }
}
