# L1 — Travaux de première année

Exercices et TP de ma première année de licence (2024-2025), triés par langage puis par thème.

## Structure

| Dossier | Contenu |
|---|---|
| [`C/01-bases`](C/01-bases) | Entrées/sorties, variables, calculs (moyenne, cercle, conversions, permutation) |
| [`C/02-conditions`](C/02-conditions) | `if` / `else` : équation du 2nd degré, jeu de points, quiz, roulette russe |
| [`C/03-boucles`](C/03-boucles) | `for`, `while`, `do…while` : factorielle, puissances de 2, triangle d'étoiles, °F → °C |
| [`C/04-tableaux`](C/04-tableaux) | Tableaux : somme, recherche d'un élément, nombres pairs |
| [`MATLAB/01-bases`](MATLAB/01-bases) | Variables, conditions, `switch`, équation du 2nd degré |
| [`MATLAB/02-matrices`](MATLAB/02-matrices) | Opérations sur les matrices, produit matriciel, fonctions `somme` et `pair` |
| [`MATLAB/03-graphiques`](MATLAB/03-graphiques) | Tracés `plot` de sin / cos |
| [`HTML`](HTML) | Calculatrice, petits sites, boutons, page sauvegardée (`website/`) |
| [`LARP`](LARP) | Algorithmes en pseudo-code LARP |

## Compiler un programme C

```bash
gcc C/03-boucles/factorielle.c -o factorielle -lm
./factorielle
```

> Certains fichiers (marqués `brouillon` ou `v1`) sont des essais qui ne compilent pas : ils sont gardés tels quels comme trace de l'apprentissage.

## MATLAB

Ouvrir le dossier dans MATLAB et lancer le script voulu. `produit_matriciel_main.m` utilise la fonction `matproduct.m` du même dossier.
