#include <stdio.h>
#include <stdbool.h>
#include "mot_cles.h" /*
#define principal main 
#define principal main                                                                                  
#define retourner return                                                                                
#define du_coup {                                                                                       
#define voila }                                                                                         
#define court short                                                                                     
#define octet byte                                                                                      
#define entier int
#define vrai true
#define faux false
#define si if
#define sinon else
#define pendant_que while
#define pour for
#define afficher printf
#define inferieur_a <
#define superier_a >
#define egal =
#define moins -
#define plus +
#define fois *
#define diviser_par /
#define modulo %
#define strictement_egal_a ==
#define pas_egal_a !=
#define superieur_ou_egale_a >=
#define inferieur_ou_egale_a <=
#define et &&
#define ou ||
#define pas !
#define plus_egal +=
#define moins_egal -=
#define fois_egal *=
#define divise_egal /=
#define modulo_egal %=
#define casse break
#define cas case
#define caratere char
#define constante const
#define continuer continue
#define defaut default
#define faire do
#define enumerer enum
#define externe extern
#define flottant float
#define aller_a goto
#define enregistrer register
#define court short
#define signer signed
#define taille_de sizeof
#define statique static
#define structure struct
#define possible switch
#define alias typedef
#define non_signer unsigned
#define vide void
#define en_ligne inline*/

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
	
	entier nombre egal 26;
	pendant_que ( nombre diviser_par 5 pas_egal_a 5) du_coup
/*		si (nombre modulo 5 strictement_egal_a 0) du_coup
			afficher("%d est divisible par 5!\n", nombre);
		voila;*/
		// nombre plus_egal 1;
		afficher("%d", nombre);
	voila;
	retourner 0;
	voila;

