# Chronomètre NCurses

Un chronomètre interactif en mode terminal utilisant la bibliothèque NCurses.

## 📋 Description

Ce projet propose plusieurs implémentations d'un chronomètre en C, avec différents niveaux de complexité :

- **ChronoSimple** : Un chronomètre basique qui affiche le temps écoulé
- **ChronoMoyen** : Un chronomètre avec contrôle de démarrage/pause
- **Chrono** : Version complète avec tours, avertissements et personnalisation
- **ChronoDifficile** : Version expérimentale avec fonctionnalités avancées

## ✨ Fonctionnalités

La version complète (`Chrono.c`) offre les fonctionnalités suivantes :

- ⏱️ Démarrage et pause du chronomètre
- 🔄 Réinitialisation
- 🏁 Marquage des tours (jusqu'à 20)
- ⚠️ Système d'avertissement configurable
- 🎨 Effets visuels (flash) lorsque le temps d'avertissement est dépassé

## 🖥️ Interface

```
== Chronometre ==
Tour  1 :  0 :  2 : 35 : 47
Tour  2 :  0 :  1 : 50 : 23
Tour  3 :  0 :  1 : 27 : 89
Tour  4 :  0 :  0 : 52 : 16
Tour  5 :  0 :  0 : 29 : 43
Tour  6 :  0 :  0 : 15 : 21

 0 :  7 : 30 : 39
Avertissement :  0 : 25 :  0 :  0
-------------------------------------------
Espace : lancer / mettre en pause
r      : reinitialiser
t      : marquer tour
F1/F2  : incrementer / decrementer heure avertissement
F3/F4  : incrementer / decrementer minute avertissement
F5/F6  : incrementer / decrementer seconde avertissement
q      : quitter
```

## 📦 Prérequis

- GCC ou autre compilateur C
- Bibliothèque NCurses

## 🚀 Installation

1. Compilez le programme
   ```bash
   gcc Chrono.c -o chrono -lncurses
   ```

2. Exécutez le programme
   ```bash
   ./chrono
   ```

## 🎮 Utilisation

- **Espace** : Lancer/Pauser le chronomètre
- **r** : Réinitialiser le chronomètre
- **t** : Marquer un tour
- **F1/F2** : Augmenter/Diminuer l'heure d'avertissement
- **F3/F4** : Augmenter/Diminuer la minute d'avertissement
- **F5/F6** : Augmenter/Diminuer la seconde d'avertissement
- **q** : Quitter le programme

## 👥 Auteurs

- 👨‍💻 BENESBY Quentin
- 👩‍💻 COUSSON Sophie

---

*Projet créé en février 2022*