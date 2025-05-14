# 🎮 Jeu de Boggle

Un jeu de Boggle implémenté en C utilisant la bibliothèque ncurses pour l'interface graphique.

## 📋 Description

Ce jeu est une adaptation du célèbre jeu de lettres Boggle. Le joueur doit former des mots en reliant des lettres adjacentes sur une grille 4x4. Chaque lettre ne peut être utilisée qu'une seule fois par mot.

## ✨ Fonctionnalités

- 🎲 Génération aléatoire de la grille de lettres
- 📚 Vérification des mots dans un dictionnaire
- 🔢 Calcul du score en fonction de la longueur des mots
- 🖥️ Interface graphique avec ncurses
- 📝 Suivi des mots déjà trouvés
- ⏱️ Limite d'essais incorrects

## 🚀 Compilation et exécution

```bash
# Compilation
make

# Exécution
./main
```

## 📦 Dépendances

- 📊 Bibliothèque ncurses
- 📄 Fichier de dictionnaire "mot" (doit être présent dans le répertoire)

## 🎮 Commandes du jeu

- 🖱️ Utilisez la souris pour sélectionner les lettres
- ⌨️ Appuyez sur espace pour valider un mot
- 🚪 Appuyez sur 'q' pour quitter le jeu

## 📜 Règles du jeu

1. Vous disposez de 4 essais pour former des mots incorrects
2. Les mots doivent exister dans le dictionnaire
3. Les lettres doivent être adjacentes (y compris en diagonale)
4. Chaque lettre ne peut être utilisée qu'une seule fois par mot
5. Le score augmente de façon exponentielle avec la longueur du mot

## 🗂️ Structure du projet

- `main.c` : Point d'entrée du programme
- `grille.c/h` : Gestion de la grille de jeu et des lettres
- `partie.c/h` : Logique du jeu et structure de données
- `score.c/h` : Calcul et gestion du score
- `fin_jeu.c/h` : Gestion de la fin de partie
- `ouverture.c/h` : Lecture du dictionnaire
- `affichage.c/h` : Fonctions d'affichage avec ncurses

## 👥 Auteurs

- 👨‍💻 BENESBY Quentin
- 👩‍💻 COUSSON Sophie