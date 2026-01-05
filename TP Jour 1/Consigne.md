# TP Jour 1 - Les bases du C

## Objectifs du TP
- Comprendre la structure d'un programme C
- Manipuler les variables et types de données
- Utiliser les entrées/sorties (printf, scanf)
- Pratiquer les opérateurs arithmétiques et logiques
- Créer des conditions simples

---

## Exercice 1 : Hello World !

### Objectif
Créer votre premier programme en C qui affiche un message à l'écran.

### Consignes
1. Créez un fichier `hello.c`
2. Écrivez un programme qui affiche : `Bienvenue dans le monde du C !`
3. Compilez et exécutez votre programme

### Aide
```c
#include <stdio.h>

int main(void) {
    // Votre code ici
    return 0;
}
```

### Compilation
```bash
gcc -Wall -Wextra -Werror hello.c -o hello
./hello
```

### Résultat attendu
```
Bienvenue dans le monde du C !
```

---

## Exercice 2 : Les variables

### Objectif
Déclarer et utiliser différents types de variables.

### Consignes
1. Créez un fichier `variables.c`
2. Déclarez les variables suivantes :
   - Un entier `age` avec la valeur 20
   - Un caractère `initiale` avec votre initiale
   - Un nombre décimal `taille` avec la valeur 1.75
3. Affichez ces trois variables avec des messages appropriés

### Aide
```c
int age = 20;
char initiale = 'A';
float taille = 1.75;

printf(...);
printf(...);
printf(...);
```

### Résultat attendu
```
Mon age est : 20
Mon initiale est : A
Ma taille est : 1.75 m
```

---

## Exercice 3 : Calculatrice simple

### Objectif
Créer une calculatrice qui effectue des opérations arithmétiques de base.

### Consignes
1. Créez un fichier `calculatrice.c`
2. Déclarez deux variables entières `a = 15` et `b = 4`
3. Calculez et affichez :
   - La somme de a et b
   - La différence de a et b
   - Le produit de a et b
   - Le quotient de a par b
   - Le reste de la division de a par b

### Aide
- Addition : `+`
- Soustraction : `-`
- Multiplication : `*`
- Division : `/`
- Modulo (reste) : `%`

### Résultat attendu
```
15 + 4 = 19
15 - 4 = 11
15 * 4 = 60
15 / 4 = 3
15 % 4 = 3
```

---

## Exercice 4 : Interaction avec l'utilisateur

### Objectif
Demander des informations à l'utilisateur et les utiliser.

### Consignes
1. Créez un fichier `saisie.c`
2. Demandez à l'utilisateur :
   - Son nom (chaîne de caractères)
   - Son âge (entier)
   - Sa note sur 20 (nombre décimal)
3. Affichez un message personnalisé avec ces informations

### Aide
```c
char nom[50];
int age;
float note;

printf("Entrez votre nom : ");
scanf(...);

printf("Entrez votre age : ");
scanf(...);

printf("Entrez votre note : ");
scanf(...);
```

### Résultat attendu
```
Entrez votre nom : Alice
Entrez votre age : 22
Entrez votre note : 15.5
Bonjour Alice, vous avez 22 ans et votre note est 15.50/20
```

---

## Exercice 5 : Les conditions

### Objectif
Utiliser les structures conditionnelles pour prendre des décisions.

### Consignes
1. Créez un fichier `notes.c`
2. Demandez à l'utilisateur sa note sur 20
3. Affichez une appréciation selon la note :
   - Note >= 16 : "Excellent !"
   - Note >= 14 : "Très bien !"
   - Note >= 12 : "Bien"
   - Note >= 10 : "Assez bien"
   - Note < 10 : "Insuffisant"

### Aide
```c
if (condition1) {
    // Instructions si condition1 est vraie
} else if (condition2) {
    // Instructions si condition2 est vraie
} else {
    // Instructions sinon
}
```

### Résultat attendu (exemple)
```
Entrez votre note : 15
Votre appréciation : Très bien !
```

---

## Exercice 6 : Pair ou impair

### Objectif
Déterminer si un nombre est pair ou impair.

### Consignes
1. Créez un fichier `parite.c`
2. Demandez un nombre entier à l'utilisateur
3. Affichez si le nombre est pair ou impair
4. Bonus : Affichez également si le nombre est positif, négatif ou nul

### Aide
- Un nombre est pair si `nombre % 2 == 0`
- Un nombre est impair sinon

### Résultat attendu
```
Entrez un nombre : 7
7 est impair
7 est positif
```

---

## Exercice 7 : Comparaison de nombres

### Objectif
Comparer deux nombres et afficher le plus grand.

### Consignes
1. Créez un fichier `comparaison.c`
2. Demandez deux nombres à l'utilisateur
3. Affichez le plus grand des deux
4. Si les nombres sont égaux, affichez "Les nombres sont égaux"

### Résultat attendu
```
Entrez le premier nombre : 42
Entrez le deuxième nombre : 58
Le plus grand nombre est : 58
```

---

## Exercice 8 : Affichage de caractères ASCII

### Objectif
Convertir un code ASCII (nombre entier) en caractère.

### Consignes
1. Créez un fichier `ascii.c`
2. Demandez à l'utilisateur un nombre entier (code ASCII)
3. Validez que le nombre est dans la plage valide des caractères ASCII imprimables (32 à 126)
4. Affichez le caractère correspondant
5. Si le nombre est hors limites, affichez un message d'erreur

### Information
- Les codes ASCII imprimables vont de 32 (espace) à 126 (~)
- Code 32 = espace
- Codes 33-47 = symboles (!, ", #, $, %, etc.)
- Codes 48-57 = chiffres (0-9)
- Codes 65-90 = lettres majuscules (A-Z)
- Codes 97-122 = lettres minuscules (a-z)

### Résultat attendu
```
Entrez un code ASCII (32-126) : 65
Le caractère correspondant au code 65 est : 'A'
```

```
Entrez un code ASCII (32-126) : 42
Le caractère correspondant au code 42 est : '*'
```

```
Entrez un code ASCII (32-126) : 200
Erreur : le code doit être entre 32 et 126
```

---

## Exercice 9 : Menu avec switch

### Objectif
Utiliser une structure switch/case pour créer un menu.

### Consignes
1. Créez un fichier `menu.c`
2. Affichez un menu avec 4 options :
   - 1. Afficher "Bonjour"
   - 2. Afficher "Au revoir"
   - 3. Afficher "Merci"
   - 4. Quitter
3. Utilisez `switch/case` pour gérer le choix
4. Affichez un message d'erreur si le choix n'est pas valide


### Résultat attendu
```
=== MENU ===
1. Afficher "Bonjour"
2. Afficher "Au revoir"
3. Afficher "Merci"
4. Quitter
Entrez votre choix : 1
Bonjour
```

---

## Exercice 10 : Compteur avec while

### Objectif
Utiliser une boucle while pour compter.

### Consignes
1. Créez un fichier `compteur.c`
2. Demandez à l'utilisateur un nombre N
3. Utilisez une boucle `while` pour afficher tous les nombres de 1 à N
4. Affichez également la somme de tous ces nombres

### Aide
```c
int n = 0,
int i = 1,
int somme = 0;
// Demander N
while (i <= n) {
    // Afficher et calculer
}
```

### Résultat attendu (N = 5)
```
Entrez un nombre : 5
1 2 3 4 5 
Somme : 15
```


---

## Exercice 11 : Table de multiplication avec for

### Objectif
Utiliser une boucle for pour afficher une table de multiplication.

### Consignes
1. Créez un fichier `table.c`
2. Demandez un nombre à l'utilisateur
3. Utilisez une boucle `for` pour afficher sa table de multiplication de 1 à 10
4. Bonus : Utilisez des opérateurs d'affectation composée (+=, *=, etc.)

### Résultat attendu (nombre = 7)
```
Entrez un nombre : 7
Table de multiplication de 7 :
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70
```

---

## Exercice 12 : Incrémentation et opérateurs

### Objectif
Pratiquer les opérateurs d'incrémentation et d'affectation composée.

### Consignes
1. Créez un fichier `operateurs.c`
2. Créez une variable `score = 0`
3. Effectuez ces opérations et affichez le score après chaque opération :
   - Ajoutez 10 points avec `+=`
   - Multipliez par 2 avec `*=`
   - Soustrayez 5 points avec `-=`
   - Divisez par 3 avec `/=`
   - Incrémentez de 1 avec `++`
   - Décrémentez de 1 avec `--`

### Résultat attendu
```
Score initial : 0
Après += 10 : 10
Après *= 2 : 20
Après -= 5 : 15
Après /= 3 : 5
Après ++ : 6
Après -- : 5
Score final : 5
```

---

## Exercice 13 : Boucle for avec break et continue

### Objectif
Utiliser break et continue dans une boucle.

### Consignes
1. Créez un fichier `break_continue.c`
2. Utilisez une boucle `for` de 1 à 20
3. Utilisez `continue` pour sauter les multiples de 3
4. Utilisez `break` pour arrêter la boucle si le nombre atteint 15

### Résultat attendu
```
Nombres affichés :
1 2 4 5 7 8 10 11 13 14 
La boucle s'arrête à 15
```

---

# BONUS - Pour aller plus loin

## Bonus 1 : Convertisseur de température

### Objectif
Créer un convertisseur Celsius vers Fahrenheit et Kelvin.

### Consignes
1. Créez un fichier `temperature.c`
2. Demandez une température en Celsius
3. Convertissez et affichez en Fahrenheit et Kelvin

### Formules
- Fahrenheit = (Celsius × 9/5) + 32
- Kelvin = Celsius + 273.15

### Résultat attendu
```
Entrez la température en Celsius : 25
25.00°C = 77.00°F
25.00°C = 298.15K
```

---

## Bonus 2 : Calculatrice de moyenne

### Objectif
Calculer la moyenne de 3 notes avec des coefficients.

### Consignes
1. Créez un fichier `moyenne.c`
2. Demandez 3 notes avec leurs coefficients respectifs
3. Calculez et affichez la moyenne pondérée
4. Affichez l'appréciation selon le barème de l'exercice 5

### Formule
```
Moyenne = (note1 × coef1 + note2 × coef2 + note3 × coef3) / (coef1 + coef2 + coef3)
```

### Résultat attendu
```
Note 1 : 15
Coefficient 1 : 2
Note 2 : 12
Coefficient 2 : 1
Note 3 : 18
Coefficient 3 : 3
Moyenne : 15.67/20
Appréciation : Très bien !
```

---

## Bonus 3 : Mini calculatrice interactive

### Objectif
Créer une calculatrice qui demande l'opération à effectuer.

### Consignes
1. Créez un fichier `calc_interactive.c`
2. Demandez deux nombres à l'utilisateur
3. Demandez l'opération (+, -, *, /, %)
4. Effectuez l'opération et affichez le résultat
5. Gérez les cas d'erreur (division par zéro)

### Résultat attendu
```
Entrez le premier nombre : 10
Entrez le deuxième nombre : 3
Choisissez l'opération (+, -, *, /, %) : *
Résultat : 10 * 3 = 30
```

---

## Bonus 4 : Vérificateur d'année bissextile

### Objectif
Déterminer si une année est bissextile.

### Consignes
1. Créez un fichier `bissextile.c`
2. Demandez une année à l'utilisateur
3. Déterminez si elle est bissextile

### Règles
Une année est bissextile si :
- Elle est divisible par 4 ET
- (Elle n'est PAS divisible par 100 OU elle est divisible par 400)

### Résultat attendu
```
Entrez une année : 2024
2024 est une année bissextile
```

---

## Bonus 5 : Analyseur de caractère

### Objectif
Analyser un caractère saisi par l'utilisateur.

### Consignes
1. Créez un fichier `caractere.c`
2. Demandez un caractère à l'utilisateur
3. Indiquez si c'est :
   - Une lettre majuscule (A-Z)
   - Une lettre minuscule (a-z)
   - Un chiffre (0-9)
   - Un autre caractère

### Aide
- Les codes ASCII

### Résultat attendu
```
Entrez un caractère : A
'A' est une lettre majuscule
Code ASCII : 65
```

---

## Bonus 6 : Calcul du prix TTC

### Objectif
Calculer un prix TTC à partir d'un prix HT et d'un taux de TVA.

### Consignes
1. Créez un fichier `tva.c`
2. Demandez le prix HT et le taux de TVA
3. Calculez et affichez le montant de TVA et le prix TTC

### Formule
```
Montant TVA = Prix HT × (Taux TVA / 100)
Prix TTC = Prix HT + Montant TVA
```

### Résultat attendu
```
Prix HT : 100
Taux de TVA (%) : 20
Montant de la TVA : 20.00€
Prix TTC : 120.00€
```

---

## Bonus 7 : Dessiner un triangle d'étoiles

### Objectif
Utiliser des boucles imbriquées pour dessiner un triangle.

### Consignes
1. Demandez à l'utilisateur la hauteur du triangle (maximum 20)
2. Validez que la hauteur est entre 1 et 20
3. Dessinez un triangle isocèle avec des étoiles `*`

### Résultat attendu (hauteur = 5)
```
    *
   ***
  *****
 *******
*********
```

### Résultat attendu (hauteur = 3)
```
  *
 ***
*****
```

---

## Bonus 8 : Dessiner un rectangle d'étoiles

### Objectif
Utiliser des boucles imbriquées pour dessiner un rectangle.

### Consignes
1. Demandez à l'utilisateur la largeur du rectangle (maximum 20)
2. Demandez à l'utilisateur la hauteur du rectangle (maximum 20)
3. Validez que les valeurs sont entre 1 et 20
4. Dessinez un rectangle **vide** (uniquement le contour) avec des étoiles `*`

### Résultat attendu (largeur = 5, hauteur = 3)
```
* * * * * 
*       * 
* * * * * 
```

### Résultat attendu (largeur = 8, hauteur = 5)
```
* * * * * * * * 
*             * 
*             * 
*             * 
* * * * * * * * 
```

---

## Bonus 9 : Dessiner un cercle d'étoiles

### Objectif
Utiliser des boucles imbriquées et des calculs mathématiques pour dessiner un cercle.

### Consignes
1. Demandez à l'utilisateur le rayon du cercle (maximum 20)
2. Validez que le rayon est entre 1 et 20
3. Dessinez un cercle avec des étoiles `*` et des espaces
4. Utilisez la formule mathématique : un point (x,y) est sur le cercle si `x² + y² ≈ rayon²`

### Formule
Pour chaque position (i, j), calculez la distance au centre :
```c
distance² = (i - rayon)² + (j - rayon)²
```
Si cette distance est proche du rayon (± un seuil), affichez une étoile, sinon un espace.

### Résultat attendu (rayon = 5)
```
          * * * *           
      * *         * *       
    *                 *     
  *                     *   
  *                     *   
*                         * 
*                         * 
*                         * 
  *                     *   
  *                     *   
    *                 *     
      * *         * *       
          * * * *           
```

### Résultat attendu (rayon = 3)
```
      * * *       
    *       *     
  *           *   
  *           *   
  *           *   
    *       *     
      * * *       
```

---

## Conseils généraux

### Compilation
Toujours compiler avec les flags de warning :
```bash
gcc -Wall -Wextra -Werror fichier.c -o nom_executable
```

### Débogage
- Utilisez `printf` pour afficher les valeurs des variables
- Vérifiez les types de vos variables (int, float, char)
- Attention à l'utilisation de `&` avec `scanf`

### Bonnes pratiques
- Indentez correctement votre code (4 espaces ou 1 tab)
- Commentez les parties complexes
- Nommez vos variables de manière explicite
- Testez votre code avec différentes valeurs

---

## Pour aller encore plus loin

Si vous avez terminé tous les exercices et bonus, essayez de :
1. Combiner plusieurs exercices en un seul programme
2. Ajouter des validations sur les entrées utilisateur
3. Créer un menu pour naviguer entre différentes fonctionnalités
4. Gérer les erreurs de saisie (lettres au lieu de chiffres, etc.)

Bon courage ! 🚀
