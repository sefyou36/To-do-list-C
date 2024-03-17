#include "taches.h"

void marquerTacheTerminee(Tache *taches, int nbTaches) {
    int choix;
    if (nbTaches == 0) {
        printf("Aucune tache pour le moment.\n");
        return;
    }
    printf("Entrez le numero de la tache que vous souhaitez marquer comme terminee : ");
    scanf("%d", &choix);
    if (choix > 0 && choix <= nbTaches) {
        taches[choix - 1].terminee = 1;
        printf("La tache a ete marquee comme terminee.\n");
    } else {
        printf("Numero de tache invalide.\n");
    }
}
