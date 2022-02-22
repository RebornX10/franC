# FranC, la librairie de traduction littérale du C en français!
## Installation
 - `git clone https://github.com/RebornX10/franC.git`
 - Dans votre `main.c` 
    ```c 
    #include "mots_clefs.h"
    ```
et c'est parti!

## Utilisation

Chaque Keyword (mot-clé) est remplacé par une traduction française. Pour des raisons de compatibilité on vire les accents (merci les Ricains et leur Unicode)

- `main` devient donc `principal`
- `return` se transforme en `retourner`
- `true` revient au `vrai`
- Et la partie sympa: 
    - `{` est `du_coup`
    - `}` est `voila`
    - `==` prend le nom de `strictement_egal_a`
Ainsi de suite...

## Compilation et lancement:

```c=
entier principal() du_coup
	si (faux) du_coup
            afficher("C'est faux!\n");
	voila sinon si (vrai) du_coup
	    afficher("Du C en francais c'est drole quand meme!\n'");
	voila;

	entier indice egal  0;
	pendant_que(indice inferieur_a 10) du_coup
	    afficher("%d ", indice);
	    indice++;
	voila;
	afficher("\n");
	retourner 0;
voila;
```
Et la compilation:

```bash=
$ gcc -o  franC main.c && ./franC
```


## Exemple de code
Un exemple de code est disponible dans le main.c