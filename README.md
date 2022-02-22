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