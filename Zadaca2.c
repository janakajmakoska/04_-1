/* Program p04_02.c
   Program koj pregmetuva prosek na klas
   so povtoruvanje kontrolirano od brojach */
#include <stdio.h>
 
/* pochnuva izvrshuvanjeto na prоgramot */
int main()
{
   int counter; /* brojach na vneseni oceni */
   int grade;   /* vrednost na ocena */
   int total;   /* suma na ocenite vneseni od korisnikot */
   int average; /* sredna vrednost na ocenite */
   int pom;
   /* inicijalizacija */
   total = 0;   /* inicijaliziraj total */
   printf("Vnesi kolku oceni ke zapisuvas\n");
   scanf("%d",&counter);
   pom=counter;
   /* procesiranje */
   while ( counter != 0 ) {     /* povtori 10 pati */
      printf( "Vnesi ocena: " ); /* prompt za vlez */
      scanf( "%d", &grade );     /* chitaj ocena od korisnikot */
      total = total + grade;     /* dodaj ja ocenata na total */
      counter--;     /* zgolemi go brojachot */
   } /* kraj na while */
   
   /* zavrshna faza */
   average = total / pom; /* celobrojno delenje */
 
   printf( "Srednata vrednost na klasot e %d\n", average ); /* pechati rezultat */
 
   return 0; /* uspeshen kraj na programot */
 
} /* kraj na main */
