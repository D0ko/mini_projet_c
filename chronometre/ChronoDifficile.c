/*
    Auteur       : COUSSON Sophie / BENESBY Quentin
    Creation     : 08-02-2022
    Modification : 08-02-2022
*/

#include <time.h>
#include "ncurses.h"
#include <string.h>


typedef struct {
    int marche;
    int dureeTotale;
    int avertissement;
    int dernierTour;
    int nbTours;
    int tab[];
} Chronometre;




int nb_ms_vers_centiemes(int nb_ms) {
    return (nb_ms/10) % 100;
}

int nb_ms_vers_secondes(int nb_ms) {
    return (nb_ms / 1000) % 60;
}

int nb_ms_vers_minutes(int nb_ms) {
    return (nb_ms / (1000 * 60)) % 60;
}

int nb_ms_vers_heures(int nb_ms) {
    return (nb_ms / (1000 * 60 * 60)) % 24;
}

void afficheTemps(int nb_ms) {
    clear();
    int s, m, h, cs;
    h = nb_ms_vers_heures(nb_ms);
    m = nb_ms_vers_minutes(nb_ms);
    s = nb_ms_vers_secondes(nb_ms);
    cs = nb_ms_vers_centiemes(nb_ms);
    mvprintw(LINES-1, COLS/2-9, "%2d : %2d : %2d : %2d\n", h, m, s, cs);
}


Chronometre initialiser_chronometre() {
    Chronometre chrono;
    chrono.marche = 0;
    chrono.dernierTour = 0;
    chrono.nbTours = 0;
    return chrono;
}

void afficher_duree(int x, int y, int nb_ms) {
    mvprintw(y, x, " %2d : %2d : %2d : %2d\n");
}

int afficheTours(Chronometre chrono) {
    int i;
    if (LINES - 11 > 6) {
        for (i = 6; i >= 0; i--) {
            mvprintw(i+1, COLS / 2 - 11, "Tour %d :", chrono.dernierTour-i);
            afficher_duree(i+1, COLS /2  - 9, chrono.tab[chrono.dernierTour-i]);
        }
        return 6;
    } else {
        for (i = LINES - 11; i >= 0; i--){
            mvprintw(i+1, COLS / 2 - 11, "Tour %d :", chrono.dernierTour-i);
            afficher_duree(i+1, COLS /2  - 9, chrono.tab[chrono.dernierTour-i]);
        }
        return LINES - 11;
    }
}

void ligneTraits(){
    int i = 0;
    for (; i< COLS; i++) {
        printw("-");
    }
    printf("\n");
}

void afficheOptions(){
    printw("Espace : lancer / mettre en pause\n");
    printw("r      : reinitialiser\n");
    printw("t      : marquer tour\n");
    printw("F1/F2  : incrementer / decrementer heure avertissement\n");
    printw("F3/F4  : incrementer / decrementer minute avertissement\n");
    printw("F5/F6  : incrementer / decrementer seconde avertissement\n");
    printw("q      : quitter");
}

void affiche_interface(Chronometre chrono) {
    int pos;
    char* avertissement = "Avertissement : ";
    mvprintw(0, COLS /2  - 9, "== Chronometre ==\n");
    pos = afficheTours(chrono);
    pos += 2;
    afficher_duree(pos, COLS/2-9, chrono.dureeTotale);
    pos++;
    afficher_duree(pos, COLS / 2 - strlen(avertissement) / 2, chrono.avertissement);
    ligneTraits();
    afficheOptions();
}

void afficher_flash(Chronometre c, int* couleur) {
    int i = 0;

    if (c.dureeTotale % 200) {
        if (*couleur == 1) {
            *couleur = 2;
        } else {
            *couleur = 1;
        }
    }

    attron(COLOR_PAIR(couleur));
    for (i; i < 10; i++) {
        mvprintw(i, 0, "* * * * * * * * * *");
    }
    attroff(COLOR_PAIR(couleur));
}

int main(void) {
    initscr();

    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLUE);
    init_pair(2, COLOR_BLUE, COLOR_GREEN);



    Chronometre c;
    c = initialiser_chronometre();
    int couleur = 1;
    c.dureeTotale = 100412;
    c.avertissement = 25000;
    c.dernierTour = 2;
    c.nbTours = 2;
    c.tab[0] = 76203;
    c.tab[1] = 78400;

    if (c.dureeTotale > c.avertissement && c.dureeTotale + 5000 > c.avertissement) {
        afficher_flash(c);
    }
    // affiche_interface(c);

    refresh();
    getch();
    endwin();
    return 0;
}