#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "mots_clefs.h"

flottant carre( flottant x);

entier principal() du_coup
	si (faux) du_coup
            afficher("C'est faux!\n");
	voila sinon si (vrai) du_coup
	    afficher("Du C en francais c'est drole quand meme!\n");
	voila;
//
    flottant m, n ;
    afficher ( "\nEntrer un nombre pour recevoir son carré \n");
    lire_entree_standard ( "%f", &m ) ;
    n = carre(m);                      
    afficher ( "\nLe carre du nombre %f est %f\n",m,n );
//
	entier indice egal  0;
	pendant_que(indice inferieur_a 10) du_coup
	    afficher("%d \n", indice);
	    indice++;
	voila;
	afficher("\n");
	
	entier nombre egal 26;

	retourner 0;
voila;

alias structure professeur
{
    caractere nom[50];
    entier salle;
} prof;

	
flottant carre ( flottant x ) 
{
    flottant p ;
    p = x * x ;
    retourner ( p ) ;
}