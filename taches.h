#ifndef TACHES_H
#define TACHES_H

typedef struct {
    char description[100];
    char priorite;
    char date_echeance[20];
    int terminee;
} Tache;

void ajouterTache(Tache *taches, int *nbTaches);
void afficherTaches(Tache *taches, int nbTaches);
void marquerTacheTerminee(Tache *taches, int nbTaches);
void supprimerTache(Tache *taches, int *nbTaches);

int dateValide(char *date) {
    int jour, mois, annee;
    if (sscanf(date, "%d/%d/%d", &jour, &mois, &annee) != 3) {
        printf("Format de date invalide.\n");
        return 0; // Format invalide
    }
    if (annee < 1900 || annee > 2100 || mois < 1 || mois > 12 || jour < 1 || jour > 31) {
        printf("Date invalide.\n");
        return 0; // Date invalide
    }
    if ((mois == 4 || mois == 6 || mois == 9 || mois == 11) && jour > 30) {
        printf("Ce mois ne contient pas plus de 30 jours.\n");
        return 0; // Mois avec 30 jours
    }
    if (mois == 2) {
        if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
            if (jour > 29) {
                printf("Ann�e bissextile. F�vrier ne contient pas plus de 29 jours.\n");
                return 0; // F�vrier d'une ann�e bissextile avec plus de 29 jours
            }
        } else {
            if (jour > 28) {
                printf("Ann�e non bissextile. F�vrier ne contient pas plus de 28 jours.\n");
                return 0; // F�vrier d'une ann�e non bissextile avec plus de 28 jours
            }
        }
    }
    return 1; // Date valide
}

#endif
