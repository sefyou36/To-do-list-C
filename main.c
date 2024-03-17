#include <stdio.h>
#include "taches.h"
#include "taches.c"
#include "affichage_taches.c"
#include "marquage_tache.c"
#include "supprimer_tache.c"

int main() {
    Tache taches[100]; // Tableau de tâches
    int nbTaches = 0; // Nombre de tâches actuelles

    int choix;
    do {
        printf("\n===== GESTIONNAIRE DE TACHES =====\n");
        printf("1. Ajouter une tache\n");
        printf("2. Afficher les taches\n");
        printf("3. Marquer une tache comme terminee\n");
        printf("4. Supprimer une tache\n");
        printf("0. Quitter\n");
        printf("Faites votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterTache(taches, &nbTaches);
                break;
            case 2:
                afficherTaches(taches, nbTaches);
                break;
            case 3:
                marquerTacheTerminee(taches, nbTaches);
                break;
            case 4:
                supprimerTache(taches, &nbTaches);
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez choisir a nouveau.\n");
        }
    } while (choix != 0);

    return 0;
}
