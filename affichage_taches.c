#include "taches.h"

void afficherTaches(Tache *taches, int nbTaches) {
    if (nbTaches == 0) {
        printf("\nAucune tache pour le moment.\n");
    } else {
        printf("\nListe des taches :\n");
        for (int i = 0; i < nbTaches; i++) {
            printf("%d. Description : %s | Priorite : %c | Date d'echeance : %s | %s\n", i+1, taches[i].description, taches[i].priorite, taches[i].date_echeance, (taches[i].terminee == 0) ? "Non terminee" : "Terminee");
        }
    }
}
