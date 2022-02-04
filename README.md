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
* OBLIGATOIRE : Le compilateur `clang++` puis `c++`
* OBLIGATOIRE : les flags `-Wall` `-Wextra` `-Werror`
* OBLIGATOIRE : les classes à la `forme canonique de Coplien`

### Format et conventions de nommage
* Les dossiers des exercices : `ex00, ex01, ... , exn`
* Format de nommage : `UpperCamelCase`
* Les fichiers et les classes : `NomDeClasse.hpp`ou `NomDeClasse.h`, `NomDeClasse.cpp`
* Tous les messages doivent être terminés par `'\n'`

## 1. libraries

* ```#include <iostream>```

Appeler ```iostream``` nous permet en fait de faire un peu plus qu'afficher des messages à l'écran : on pourra aussi récupérer ce que saisit l'utilisateur au clavier, comme nous le verrons plus tard.
```iostream``` signifie « Input Output Stream », ce qui veut dire « Flux d'entrée-sortie ».

* ```#include <cmath>```

Pour avoir accès à plus de fonctions mathématiques.


## 2. les variables

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
## 3. les classes

* On definie une classe dans un fichier header `.hpp`

### Constructeur, destructeur, attributs et fonctions membres

```c++
#ifndef EXEMPLE_HPP
#define EXEMPLE_HPP

class Exemple {

    public:
        /* Constructeurs */
        Exemple();
        Exemple(char p1, int p2, float p3);
        /* Destructeurs */
        ~Exemple();

        /* Attributs */
        int foo;
        char a;
        float b;

        /* Fonction membres */
        void bar(void);
};
#endif
```

* Lorsque la classe va etre instanciee, la fonction de construction *le constructeur* est appelee.
* Lorsque mon instance n'est plus utilisee la fonction de destruction *le destructeur* va etre appele.

### definir les fonctions de notre classe

Le constructeur et le destructeur n'a pas de type de retour, ce sont des procedures.

```c++
#include "Exemple.hpp"

/* Constructeurs */
Exemple::Exemple()
{
	std::cout << "Constructor called !" << std::endl;
}

//initialiser des attributs dans un constructeur
Exemple::Exemple(char p1, int p2, float p3) : a(p1), foo(p2), b(p3)
{
	std::cout << "Constructor called !" << std::endl;
    std::cout << "a:" << this->a << std::endl;
    std::cout << "foo:" << this->foo << std::endl;
    std::cout << "b:" << this->b << std::endl;
}

/* Destructeurs */
Exemple::~Exemple()
{
	std::cout << "Destructor called !" << std::endl;
}
/* Fonction membres */
void	Exemple::bar(void)
{
	std::cout << "Function called !" << std::endl;
}
```

Dans une fonction membre de type void, le c++ passe un parametre a notre fonction de maniere "transparente". 
c'est le pointeur `this` qui pointe sur l'instance courrante de cette classe.

```c++
this->foo = 21;
this->bar(); // on peut appeler une fonction membre a l'aide du pointeur this
```