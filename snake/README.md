# 🐍 Snake Game

Un jeu Snake classique écrit en C avec la bibliothèque ncurses.

## 📋 Description

Ce projet est une implémentation du jeu Snake classique en C. Le joueur contrôle un serpent qui se déplace sur un plateau de jeu, mange des pommes pour grandir et doit éviter de toucher les bords ou son propre corps.

## 🎮 Contrôles

- `z` : Se déplacer vers le haut
- `q` : Se déplacer vers la gauche
- `s` : Se déplacer vers le bas
- `d` : Se déplacer vers la droite
- `Espace` : Pause

## 🔧 Configuration

Le fichier `serpent.ini` permet de configurer le jeu avec les paramètres suivants :

```
largeur = 16        # Largeur du plateau de jeu
hauteur = 10        # Hauteur du plateau de jeu
nombre_pommes = 3   # Nombre de pommes présentes simultanément
taille_serpent = 3  # Taille initiale du serpent
duree_tour = 250000 # Durée entre chaque mise à jour (en microsecondes)
```

## 🚀 Installation et compilation

### 📦 Prérequis

- Un compilateur C (gcc recommandé)
- La bibliothèque ncurses

### 📦 Installation des dépendances

Sous Debian/Ubuntu :
```bash
sudo apt-get install gcc make libncurses5-dev
```

### Compilation

```bash
gcc -o snake main.c case.c serpent.c pomme.c monde.c graphique.c sauvegarde.c -lncurses
```

## 🎮 Exécution

```bash
./snake
```

## 📐 Structure du projet

- **case.h/c** : Définition de la structure de base pour les positions
- **serpent.h/c** : Gestion du serpent
- **pomme.h/c** : Gestion des pommes
- **monde.h/c** : Logique du jeu et interactions
- **graphique.h/c** : Interface graphique avec ncurses
- **sauvegarde.h/c** : Lecture de la configuration
- **main.c** : Point d'entrée du programme

## 🎯 Fonctionnalités

- Déplacement du serpent dans les quatre directions
- Croissance du serpent lorsqu'il mange une pomme
- Génération aléatoire des pommes
- Pause et reprise du jeu
- Configuration personnalisable
- Affichage du score (nombre de pommes mangées)

## 👥 Auteur

- 👨‍💻 BENESBY Quentin
- 👩‍💻 COUSSON Sophie