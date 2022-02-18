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

## Progression

1. cpp00 ✅
- [x] ex00
- [x] ex01
- [x] ex02
2. cpp01 ✅
- [x] ex00
- [x] ex01
- [x] ex02
- [x] ex03
- [x] ex04
- [x] ex05
- [x] ex06
3. cpp02
- [x] ex00
- [x] ex01
- [x] ex02
- [ ] ex03
3. cpp03
- [x] ex00
- [x] ex01
- [x] ex02
- [ ] ex03


## Les couleurs
```c++
enBlanc='\033[37m'
enBleu='\033[34m'
enJaune='\033[33m'
enRouge='\033[31m'
enVert='\033[32m'
enNoir='\033[30m'

enGras='\033[1m'
enSouligne='\033[4m'
enClignotant='\033[5m'
enSurligne='\033[7m'

enDefaut='\033[0m'
```

## Les classes

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

### fonctions membres virtuelles

Le mot-clé ```virtual``` permet de supplanter une fonction membre d'une classe parent depuis une classe dérivée.</br> 

L'appel à une **fonction membre virtuel** n'est au contraire pas déterminé à la compilation, mais lors de **l'exécution**.</br> 
Le fait que A::F2() soit déclarée virtual et supplantée par B::F2() signifie qu'à chaque appel de F2(), le compilateur va tester le type réel de l'objet afin d'appeler B::F2() si possible. Sinon, il appellera A::F2().</br> 
On parle alors de liaison **dynamique** (dynamic binding en anglais) par opposition à la liaison **statique** faite lors de l'édition de liens.

[En savoir plus](https://cpp.developpez.com/faq/cpp/?page=Les-fonctions-membres-virtuelles)