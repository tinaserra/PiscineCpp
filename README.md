# cpp
Cpp modules from 42

## Sujets & scale de correction

* cpp00 - [sujet pdf](https://github.com/tinaserra/cpp/blob/main/links/cpp00_fr.subject.pdf) | [scale](https://github.com/tinaserra/cpp/blob/main/links/scale_cpp00.pdf)
* cpp01 - [sujet pdf](https://github.com/tinaserra/cpp/blob/main/links/cpp01_en.subject.pdf) | [scale](https://github.com/tinaserra/cpp/blob/main/links/scale_cpp01.pdf)
* cpp02 - [sujet pdf](https://github.com/tinaserra/cpp/blob/main/links/cpp02_fr.subject.pdf) | [scale](https://github.com/tinaserra/cpp/blob/main/links/scale_cpp02.pdf)
* cpp03 - [sujet pdf](https://github.com/tinaserra/cpp/blob/main/links/cpp03_en.subject.pdf) | [scale](https://github.com/tinaserra/cpp/blob/main/links/scale_cpp03.pdf)
* cpp04 - [sujet pdf](https://github.com/tinaserra/cpp/blob/main/links/cpp04_en.subject.pdf) | [scale](https://github.com/tinaserra/cpp/blob/main/links/scale_cpp04.pdf)
* cpp05 - [sujet pdf](https://github.com/tinaserra/cpp/blob/main/links/cpp05_fr.subject.pdf) | [scale](https://github.com/tinaserra/cpp/blob/main/links/scale_cpp05.pdf)
* cpp06 - [sujet pdf](https://github.com/tinaserra/cpp/blob/main/links/cpp06_fr.subject.pdf) | [scale](https://github.com/tinaserra/cpp/blob/main/links/scale_cpp06.pdf)
* cpp07 - [sujet pdf](https://github.com/tinaserra/cpp/blob/main/links/cpp07_en.subject.pdf) | [scale](https://github.com/tinaserra/cpp/blob/main/links/scale_cpp07.pdf)
* cpp08 - [sujet pdf](https://github.com/tinaserra/cpp/blob/main/links/cpp08_en.subject.pdf) | [scale](https://github.com/tinaserra/cpp/blob/main/links/scale_cpp08.pdf)

### regles generales

* OK : utiliser la librairie standard
* INTERDIT : utiliser les fonctions `*alloc` `*printf` `free`
* INTERDIT : utiliser la STL sauf module 08, pas de `#include <algorithm>`
* INTERDIT : les mot-clés `using` `namespace` `friend`
* INTERDIT : librairies externes : incluant `C++11`, `Boost`...
* OBLIGATOIRE : Le compilateur `clang++`
* OBLIGATOIRE : les flags `-Wall` `-Wextra` `-Werror`


## 1. UNE STRUCTURE DE PROGRAMMATION PROCEDURALE :

* Les langages de programmation conventionnels tels que COBOL, FORTRAN, C sont communément appelés programmation orientée procédurale.
* Dans la programmation orientée procédurale, l'accent est mis sur les fonctions. Un certain nombre de fonctions sont écrites pour accomplir une tâche spécifique.
* La concentration principale est faite sur le développement de la fonction et très peu d'attention est accordée aux données qui sont utilisées par diverses fonctions.

**Inconvénients/Limites du langage procédural**

1. Dans le programme multifonctions, de nombreux éléments de données importants sont placés comme globaux afin qu'ils puissent être consultés par toutes les fonctions. Chaque fonction peut avoir ses propres données appelées données locales. Lorsque vous utilisez des données globales, les données globales sont plus vulnérables à une modification accidentelle par une fonction.
2. Dans un grand programme, il est très difficile d'identifier quelles données sont utilisées par quelle fonction. Au fur et à mesure que le programme grossit, il devient difficile de le déboguer.
3. Un autre inconvénient de l'approche procédurale est qu'elle ne modélise pas très bien les problèmes du monde réel. En effet, les fonctions sont orientées vers l'action et ne correspondent pas aux éléments du problème.

**Caractéristiques de la programmation orientée procédurale :**

* L'accent est mis sur l'action (algorithme) plutôt que sur les données.
* Les programmes volumineux sont divisés en programmes plus petits appelés fonctions.
* La plupart des fonctions partagent des données globales.
* Les données se déplacent ouvertement dans le système d'une fonction à l'autre.
* Les fonctions transforment les données d'un formulaire à un autre formulaire.
* Utilise une approche descendante dans la conception du programme.

## 2. STRUCTURE DE LA PROGRAMMATION ORIENTÉE OBJET :

* La POO traite les données comme un élément critique du programme et ne leur permet pas de circuler dans le système.
* Il lie plus étroitement les données à la fonction qui les exploite.
* Il protège les données contre les modifications accidentelles de fonctions externes.
* En POO, le problème est divisé en un nombre différent d'entités appelées Objet.
* L'objet contient des données et des fonctions qui opèrent sur les données.
* Le schéma suivant montre l'organisation des données et des fonctions en POO.
* Les données de l'objet sont accessibles par les fonctions associées à cet objet.
* Cependant la fonction d'un objet peut communiquer avec la fonction d'un autre objet.

## 3. ENTRÉE/SORTIE CONSOLE

**Affichage de la sortie à l'aide de l'opérateur d'insertion ```<<```**

* ```<<``` est appelé opérateur Insertion ou PutTo.
* Il est similaire à printf () en programmation c.
* Il insère le contenu de la variable sur le R.H.S. côté de l'objet spécifié sur L.H.S.

```c++
Syntax: Cout << variable-name; example: cout<<sum ;
Cout << "string" ; example : cout << "Hello" ;
```

* L'identifiant cout est un objet prédéfini qui représente le flux de sortie standard.
* Ici, le flux de sortie standard est Screen.

La déclaration, cout << "C++ est un langage orienté objet."; provoque l'affichage de la chaîne spécifiée à l'écran.
Opérateur d'insertion d'objet d'entrée standard

**Opérateur d'extraction ```>>```**

* ```>>``` est appelé opérateur Extraction ou Getfrom.
* Il est similaire à scanf() en programmation c.
* Il extrait la valeur du clavier et l'affecte à la variable sur son R.H.S.

```c++
Syntax: cin << variable-name;
Example: cin >> num1 ;
```

L'instruction ci-dessus fait attendre le programme jusqu'à ce que l'utilisateur tape un nombre. Le nombre de types est alors placé dans une variable num1.

· L'identifiant cin est un objet prédéfini qui représente le flux d'entrée standard.

Ici, le flux d'entrée standard est le clavier.

Opérateur d'extraction d'objet d'entrée standard



## 4. PREMIER PROGRAMME C++.

```c++
# include <iostream.h> // include header file

void main()
{
    cout << “C++ is an Object-Oriented Language.”;
}
```

En C++, nous incluons le fichier d'en-tête ```<iostream.h>```.

Cette directive force le préprocesseur à ajouter le contenu du fichier iostream au programme. Il contient des déclarations pour les identifiants cout et l'opérateur << ainsi que des déclarations pour l'opérateur cin et >>.


Instruction de retour dans main()

* main() en C++ doit se terminer par l'instruction return(0) sinon un avertissement/une erreur peut se produire.
* Ou une autre option est write void main()


* Généralement, la fonction main() ne renvoie aucune valeur et c'est pourquoi son type de données de retour est mentionné comme void.
* Si vous n'écrivez pas void main(), le compilateur considère int comme un type de données de retour.
* Si le type de données de retour de la fonction est int , il doit renvoyer une valeur.
* Donc, pour éviter cet avertissement, placez l'instruction return(0) comme dernière instruction de votre programme.

Ecrire un programme en c++ pour additionner deux nombres.
```c++
int main()
{
    int num1 , num2 , sum;

    cout<< “ Enter two numbers : “;
    cin >> num1;
    cin >> num2;
    sum = num1 + num2;
    cout << “Total = “ << sum;
    return (0);
}
```

## libraries 

* ```#include <iostream>```

Appeler ```iostream``` nous permet en fait de faire un peu plus qu'afficher des messages à l'écran : on pourra aussi récupérer ce que saisit l'utilisateur au clavier, comme nous le verrons plus tard.
```iostream``` signifie « Input Output Stream », ce qui veut dire « Flux d'entrée-sortie ».

* ```#include <cmath>```

Pour avoir accès à plus de fonctions mathématiques.

## interdit a 42

```
using namespace friend
```

## instructions

```c++
std::cout << "Hello world!" << std::endl;
```

```c++
int ageUtilisateur(0); //On prepare une case mémoire pour stocker un entier
std::cin >> ageUtilisateur; //On fait entrer un nombre dans cette case
```

```cout```: affiche un message à l'écran.

```endl```: crée un retour à la ligne dans la console.

```cin```: recupere ce que rentrel'utilisateur.

* aternative au ```std::cin >> str```

pour recuperer une string qui contiendrai des espace il faut utiliser ```std::getline();```

```c++
std::cout << "Quel est votre nom ?" << std::endl;

std::string nomUtilisateur("Sans nom");
std::getline(cin, nomUtilisateur); //On remplit cette case avec toute la ligne que l'utilisateur a écrit
```
* Quand on mélange l'utilisation des chevrons  ```>>``` et de ```std::getline()```, il faut toujours placer l'instruction ```cin.ignore()``` après la ligne ```cin>>a```. 

```c++
#include <iostream>
#include <string>

int main()
{
    std::cout << "Combien vaut pi ?" << std::endl;
    double piUtilisateur(-1.); //On crée une case mémoire pour stocker un nombre réel
    std::cin >> piUtilisateur; //Et on remplit cette case avec ce qu'écritl'utilisateur

    std::cin.ignore();

    std::cout << "Quel est votre nom ?" << std::endl;
    std::string nomUtilisateur("Sans nom"); //On crée une case mémoire pour contenir une chaine de caractères
    std::getline(std::cin, nomUtilisateur); //On remplit cette case avec toute la ligne que l'utilisateur a écrit
     
    std::cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pi vaut " << piUtilisateur << "." << std::endl;

    return 0;
}
```

## les variables

### les types de variable

| TYPE | Ce qu'il peut contenir |
| :-- | :-- |
| ```bool``` |Une valeur parmi deux possibles, vrai (true) ou faux (false)|
| ```char``` |Un caractère|
| ```int``` |Un nombre entier|
| ```unsigned int``` |Un nombre entier positif ou nul|
| ```double``` |Un nombre à virgule|
| ```string``` |Une chaîne de caractères|

### declaration de variable

* Syntaxe d'initialisation d'une variable en C++
```TYPE NOM (VALEUR);```
* Syntaxe d'initialisation d'une variable, héritée du C:
```TYPE NOM = VALEUR;```

### les strings

```c++
#include <string>

std::string str ("hello world");
```

* declarer plusieurs variables

```c++
int a(2),b(4),c(-1);  //On déclare trois cases mémoires nommées a, b et c et  qui contiennent respectivement les valeurs 2, 4 et -1

string prenom("Albert"), nom("Einstein"); //On déclare deux cases pouvant contenir des chaînes de caractères
```

### references

* c'est un pointeur dereference. si on envoit une reference dans une fonction, la fonction va utiliser et / ou modifier la vraie zone memoire de la variable et pas la copie.

```c++
int ma_super_variable (42); //Une variable pour contenir 42

int& ma_super_reference(ma_super_variable);  //Et une référence sur la variable 'ma_super_variable'
```

### les constantes

les variables contantes se declarent avec le mot cle ```const```et sont des variables dont on ne peut pas modifier le contenu.

```c++
std::string const motDePasse("wAsTZsaswQ");
double const pi(3.14);
unsigned int const pointsDeVieMaximum(100);
```

