#include <stdio.h>

/* Estudiante Andrés Crespo.
C.I 31.259.533        */

void main(){
    int i,j,h, ganador,controundsganados1=0,controundsperdidos1=0,controundsganados2=0,controundsperdidos2=0;
    int faul,perderpts1,perderpts2, ptsmayweather=0, ptscanelo=0, ptsfinales11=0, ptsfinales12=0,ptsfinales21=0,ptsfinales22=0,ptsfinales31=0,ptsfinales32=0;
    int ptsmayweather21=0,ptscanelo22=0,perderpts3,perderpts21,perderpts22,perderpts23,faul2;
    int controundsganados21=0,controundsperdidos21=0,controundsganados22=0,controundsperdidos22=0;
    int controundsganados31=0,controundsperdidos32=0, ptsmayweather31=0, ptscanelo32=0,controundsganados32=0,controundsperdidos31=0,faul3;
    int perderpts31, perderpts32, perderpts33, victoria11,victoria12,victoria21,victoria22,victoria31,victoria32,empate1112,empate2122,empate3132,bolsainicial=100000, pagoganador1,pagoganador2,pagoperdedor1,pagoperdedor2;


     for(i=1; i<=12; i++){
        printf("\n Sr. Steve Weisfeld, Quien gano el Round %d", i); printf("?"); printf("\n \n");
        printf("\n Ingrese un 1 si gano Mayweather Jr, o un 2 si gano Canelo Alvarez: "); printf("\n");
        scanf("%d", &ganador);
        if(ganador==1){
            controundsganados1++;
            ptsmayweather=ptsmayweather + 10;
            ptscanelo=ptscanelo + 9;
        }
        else{
            controundsganados2++;
            ptsmayweather=ptsmayweather + 9;
            ptscanelo=ptscanelo + 10;
        }

        printf("\n Ingrese un 1 si Mayweather Jr cayo o toco con sus guantes la lona, o un 2 si Canelo Alvarez lo hizo, o un 3 si ambos lo hicieron, o un 0 si ninguno lo hizo: ");
        scanf("%d", &faul);
        if(faul==1){
            perderpts1=2;
        }
        else if(faul==2){
            perderpts2=2;
        }
        if(faul==3){
            perderpts3=3;
        }

    }

        ptsfinales11=ptsmayweather;
        ptsfinales12=ptscanelo;

        if(perderpts1==2){
            ptsfinales11=ptsmayweather-2;
        }
        if(perderpts2==2){
            ptsfinales12=ptscanelo-2;
        }
        if(perderpts3==3){
            ptsfinales11=ptsmayweather-2;
             ptsfinales12=ptscanelo-2;
        }

        
      for(j=1; j<=12; j++){
        printf("\n Sra. Julie Lederman, Quien gano el Round %d", j); printf("?"); printf("\n \n");
        printf("Ingrese un 1 si gano Mayweather Jr, o un 2 si gano Canelo Alvarez: ");
        scanf("%d", &ganador);
        if(ganador==1){
            controundsganados21++;
            ptsmayweather21=ptsmayweather21 + 10;
            ptscanelo22=ptscanelo22 + 9;
        }
        else{
            controundsganados22++;
            ptsmayweather21=ptsmayweather21 + 9;
            ptscanelo22=ptscanelo22 + 10;
        }

        printf("\n Ingrese un 1 si Mayweather Jr cayo o toco con sus guantes la lona, o un 2 si Canelo Alvarez lo hizo, o un 3 si ambos lo hicieron, o un 0 si ninguno lo hizo: ");
        scanf("%d", &faul2);
        if(faul2==1){
            perderpts21=2;
        }
        else if(faul2==2){
            perderpts22=2;
        }
         if(faul2==3){
            perderpts23=3;
        }

    }

        ptsfinales21=ptsmayweather21;
        ptsfinales22=ptscanelo22;

        if(perderpts21==2){
            ptsfinales21=ptsmayweather21-2;
        }
        if(perderpts22==2){
            ptsfinales22=ptscanelo22-2;
        }
        if(perderpts23==3){
            ptsfinales21=ptsmayweather21-2;
             ptsfinales22=ptscanelo22-2;
        }
    

      for(h=1; h<=12; h++){
        printf("\n Sr. Tim Cheatham, Quien gano el Round %d", h); printf("?"); printf("\n \n");
        printf("Ingrese un 1 si gano Mayweather Jr, o un 2 si gano Canelo Alvarez: ");
        scanf("%d", &ganador);
        if(ganador==1){
            controundsganados31++;
            ptsmayweather31=ptsmayweather31 + 10;
            ptscanelo32=ptscanelo32 + 9;
        }
        else{
            controundsganados32++;
            ptsmayweather31=ptsmayweather31 + 9;
            ptscanelo32=ptscanelo32 + 10;
        }

        printf("\n Ingrese un 1 si Mayweather Jr cayo o toco con sus guantes la lona, o un 2 si Canelo Alvarez lo hizo, o un 3 si ambos lo hicieron, o un 0 si ninguno lo hizo: ");
        scanf("%d", &faul3);
        if(faul3==1){
            perderpts31=2;
        }
        else if(faul3==2){
            perderpts32=2;
        }
         if(faul3==3){
            perderpts33=3;
        }

    }

        ptsfinales31=ptsmayweather31;
        ptsfinales22=ptscanelo22;

        if(perderpts31==2){
            ptsfinales31=ptsmayweather31-2;
        }
        if(perderpts32==2){
            ptsfinales32=ptscanelo32-2;
        }
        if(perderpts33==3){
            ptsfinales31=ptsmayweather31-2;
             ptsfinales32=ptscanelo32-2;
        }

        controundsperdidos1 = (12 - controundsganados1);
        controundsperdidos2 = (12 - controundsganados2);
        controundsperdidos21 = (12 - controundsganados21);
        controundsperdidos22 = (12 - controundsganados22);
        controundsperdidos31 = (12 - controundsganados31);
        controundsperdidos32 = (12 - controundsganados32);

    if((controundsganados1>=controundsganados21) && (controundsganados21>=controundsganados31)){
        printf("\n Mayweather Jr Gano %d", controundsganados1); printf(" ""rounds");
    }
    else if((controundsganados21>=controundsganados1) && (controundsganados1>=controundsganados31)){
        printf("\n Mayweather Jr Gano %d", controundsganados21); printf(" ""rounds");
    }
    else if((controundsganados31>=controundsganados1) && (controundsganados1>=controundsganados21)){
        printf("\n Mayweather Jr Gano %d", controundsganados31); printf(" ""rounds");
    }
    else if((controundsganados1==controundsganados21) && (controundsganados21==controundsganados31)){
        printf("\n Mayweather Jr Gano %d", controundsganados1); printf(" ""rounds");
    }

    if((controundsperdidos1 && controundsperdidos21 && controundsperdidos31) <= 12){
         if((controundsperdidos1>=controundsperdidos21) && (controundsperdidos21>=controundsperdidos31)){
        printf("\n Mayweather Jr Perdio %d", controundsperdidos1); printf(" ""rounds");
    }
    else if((controundsperdidos21>=controundsperdidos1) && (controundsperdidos1>=controundsperdidos31)){
         printf("\n Mayweather Jr Perdio %d", controundsperdidos21); printf(" ""rounds");
    }
    else if((controundsperdidos31>=controundsperdidos1) && (controundsperdidos1>=controundsperdidos21)){
         printf("\n Mayweather Jr Perdio %d", controundsperdidos31); printf(" ""rounds");
    }
    else  if((controundsperdidos1==controundsperdidos21) && (controundsperdidos21==controundsperdidos31)){
         printf("\n Mayweather Jr Perdio %d", controundsperdidos1); printf(" ""rounds");

    }
    }

    if((controundsganados2>=controundsganados22) && (controundsganados22>=controundsganados32)){
        printf("\n Canelo Alvarez Gano %d", controundsganados2); printf(" ""rounds");
    }
    else if((controundsganados22>=controundsganados2) && (controundsganados2>=controundsganados32)){
        printf("\n Canelo Alvarez Gano %d", controundsganados22); printf(" ""rounds");
    }
    else if((controundsganados32>=controundsganados2) && (controundsganados2>=controundsganados22)){
        printf("\n Canelo Alvarez Gano %d", controundsganados32); printf(" ""rounds");
    }
    else if((controundsganados2==controundsganados22) && (controundsganados22==controundsganados32)){
        printf("\n Canelo Alvarez Gano %d", controundsganados2); printf(" ""rounds");
    }

    if((controundsperdidos2 && controundsperdidos22 && controundsperdidos32) <= 12){
         if((controundsperdidos2>=controundsperdidos22) && (controundsperdidos22>=controundsperdidos32)){
        printf("\n Canelo Alvarez Perdio %d", controundsperdidos2); printf(" ""rounds");
    }
    else if((controundsperdidos22>=controundsperdidos2) && (controundsperdidos2>=controundsperdidos32)){
        printf("\n Canelo Alvarez Perdio %d", controundsperdidos22); printf(" ""rounds");
    }
    else if((controundsperdidos32>=controundsperdidos2) && (controundsperdidos2>=controundsperdidos22)){
        printf("\n Canelo Alvarez Perdio %d", controundsperdidos32); printf(" ""rounds");
    }
    }

    if(ptsfinales11>ptsfinales12){
        victoria11=1;
        victoria12=0;
    }
    else if(ptsfinales12>ptsfinales11){
        victoria12=1;
        victoria11=0;
    }
    else if(ptsfinales11==ptsfinales12){
        empate1112=1;
    }
    if(ptsfinales21>ptsfinales22){
        victoria21=1;
        victoria22=0;
    }
    else if(ptsfinales22>ptsfinales21){
        victoria22=1;
        victoria21=0;
    }
    else if(ptsfinales22==ptsfinales21){
        empate2122=1;
    }
    if(ptsfinales31>ptsfinales32){
        victoria31=1;
        victoria32=0;
    }
    else if(ptsfinales32>ptsfinales31){
        victoria32=1;
        victoria31=0;
    }
    else if(ptsfinales31==ptsfinales32){
        empate3132=1;
    }

    printf("\n De acuerdo a la decision del Juez Steve Weisfeld, Mayweather Jr obtuvo una puntuacion final de %d", ptsfinales11); printf(" " "pts");
    printf("\n Y Canelo Alvarez obtuvo una puntuacion final de %d", ptsfinales12); printf(" " "pts");

    printf("\n De acuerdo a la decision de la Jueza Julie Lederman, Mayweather Jr obtuvo una puntuacion final de %d", ptsfinales21); printf(" " "pts");
    printf("\n Y Canelo Alvarez obtuvo una puntuacion final de %d", ptsfinales22); printf(" " "pts");

    printf("\n De acuerdo a la decision del Juez Tim Cheatham, Mayweather Jr obtuvo una puntuacion final de %d", ptsfinales31); printf(" " "pts");
    printf("\n Y Canelo Alvarez obtuvo una puntuacion final de %d", ptsfinales32); printf(" " "pts");

    if((victoria11==1 && victoria21==1) && victoria32==1){
         printf("\n Dandole asi la victoria por Decision Dividida a Mayweather Jr ");
         printf("\n Y por lo tanto la derrota a Canelo Alvarez");
    }
    else if((victoria11==1 && victoria31==1) && victoria22==1){
         printf("\n Dandole asi la victoria por Decision Dividida a Mayweather Jr ");
         printf("\n Y por lo tanto la derrota a Canelo Alvarez");
    }
    else if((victoria21==1 && victoria31==1) && victoria12==1){
         printf("\n Dandole asi la victoria por Decision Dividida a Mayweather Jr ");
         printf("\n Y por lo tanto la derrota a Canelo Alvarez");
    }

    if(victoria11==1 && victoria21==1 && victoria31==1){
         printf("\n Dandole asi la victoria por Decision Unanime a Mayweather Jr ");
         printf("\n Y por lo tanto la derrota a Canelo Alvarez");
    }

    if((victoria11==1 && victoria21==1) && empate3132==1){
        printf("\n Dandole asi la victoria por Decision por Mayoria a Mayweather Jr ");
        printf("\n Y por lo tanto la derrota a Canelo Alvarez");
    }
    else if((victoria21==1 && victoria31==1) && empate1112==1){
        printf("\n Dandole asi la victoria por Decision por Mayoria a Mayweather Jr ");
        printf("\n Y por lo tanto la derrota a Canelo Alvarez");
    }
    else  if((victoria11==1 && victoria31==1) && empate2122==1){
        printf("\n Dandole asi la victoria por Decision por Mayoria a Mayweather Jr ");
        printf("\n Y por lo tanto la derrota a Canelo Alvarez");
    }


    if((victoria12==1 && victoria22==1) && victoria31==1){
         printf("\n Dandole asi la victoria por Decision Dividida a Canelo Alvarez");
         printf("\n Y por lo tanto la derrota a Mayweather Jr");
    }
    else if((victoria12==1 && victoria32==1) && victoria21==1){
         printf("\n Dandole asi la victoria por Decision Dividida a Canelo Alvarez");
         printf("\n Y por lo tanto la derrota a Mayweather Jr");
    }
    else if((victoria22==1 && victoria32==1) && victoria11==1){
        printf("\n Dandole asi la victoria por Decision Dividida a Canelo Alvarez");
         printf("\n Y por lo tanto la derrota a Mayweather Jr");
    }

    if(victoria12==1 && victoria22==1 && victoria32==1){
         printf("\n Dandole asi la victoria por Decision Unanime a Canelo Alvarez");
         printf("\n Y por lo tanto la derrota a Mayweather Jr");
    }

    if((victoria12==1 && victoria22==1) && empate3132==1){
       printf("\n Dandole asi la victoria por Decision por Mayoria a Canelo Alvarez");
         printf("\n Y por lo tanto la derrota a Mayweather Jr");
    }
    else if((victoria22==1 && victoria32==1) && empate1112==1){
      printf("\n Dandole asi la victoria por Decision por Mayoria a Canelo Alvarez");
         printf("\n Y por lo tanto la derrota a Mayweather Jr");
    }
    else  if((victoria12==1 && victoria32==1) && empate2122==1){
       printf("\n Dandole asi la victoria por Decision por Mayoria a Canelo Alvarez");
         printf("\n Y por lo tanto la derrota a Mayweather Jr");
    }


    if((ptsfinales11 >= ptsfinales21) && ((ptsfinales21 >= ptsfinales31))){
        printf("\n La tarjeta de mayor puntuacion para Mayweather Jr fue la del Juez Steve Weisfeld");
    }
    else if((ptsfinales21 >= ptsfinales11) && ((ptsfinales11 >= ptsfinales31))){
        printf("\n La tarjeta de mayor puntuacion para Mayweather Jr fue la de la Jueza Julie Lederman");
    }
    else if((ptsfinales31 >= ptsfinales21) && ((ptsfinales21 >= ptsfinales11))){
        printf("\n La tarjeta de mayor puntuacion para Mayweather Jr fue la del Juez Tim Cheatham");
    }
    else if((ptsfinales11 == ptsfinales21) && ((ptsfinales21 == ptsfinales31))){
        printf("\n Las tres tarjetas resultaron con la misma puntuacion para Mayweather Jr");
    }

    
    if((ptsfinales11 <= ptsfinales21) && ((ptsfinales21 <= ptsfinales31))){
        printf("\n La tarjeta de menor puntuacion para Mayweather Jr fue la del Juez Steve Weisfeld");
    }
    else if((ptsfinales21 <= ptsfinales11) && ((ptsfinales11 <= ptsfinales31))){
        printf("\n La tarjeta de menor puntuacion para Mayweather Jr fue la de la Jueza Julie Lederman");
    }
    else if((ptsfinales31 <= ptsfinales21) && ((ptsfinales21 <= ptsfinales11))){
        printf("\n La tarjeta de menor puntuacion para Mayweather Jr fue la del Juez Tim Cheatham");
    }

   
    if((ptsfinales12 >= ptsfinales22) && ((ptsfinales22 >= ptsfinales32))){
        printf("\n La tarjeta de mayor puntuacion para Canelo Alvarez fue la del Juez Steve Weisfeld");
    }
    else if((ptsfinales22 >= ptsfinales12) && ((ptsfinales12 >= ptsfinales32))){
        printf("\n La tarjeta de mayor puntuacion para Canelo Alvarez fue la de la Jueza Julie Lederman");
    }
    else if((ptsfinales32 >= ptsfinales22) && ((ptsfinales22 >= ptsfinales12))){
        printf("\n La tarjeta de mayor puntuacion para Canelo Alvarez fue la del Juez Tim Cheatham");
    }
    else if((ptsfinales12 == ptsfinales22) && ((ptsfinales22 == ptsfinales32))){
        printf("\n Las tres tarjetas resultaron con la misma puntuacion para Canelo Alvarez");
    }

     if(((ptsfinales12 <= ptsfinales22 <= ptsfinales32))){
        printf("\n La tarjeta de menor puntuacion para Canelo Alvarez fue la del Juez Steve Weisfeld");
    }
    else if(((ptsfinales22 <= ptsfinales12 <= ptsfinales32))){
        printf("\n La tarjeta de menor puntuacion para Canelo Alvarez fue la de la Jueza Julie Lederman");
    }
    else if(((ptsfinales32 <= ptsfinales22 <= ptsfinales12))){
        printf("\n La tarjeta de menor puntuacion para Canelo Alvarez fue la del Juez Tim Cheatham");
    }


    if((victoria11==1 && victoria21==1) && victoria32==1){
         pagoganador1 = (bolsainicial * 0.05) + bolsainicial;
         pagoperdedor2 = bolsainicial - 40000;
         printf("\n Mayweather Jr se gana %d", pagoganador1); printf(" ""$$$");
         printf("\n Y Canelo Alvarez se lleva %d", pagoperdedor2); printf(" ""$$$");
    }
    else if((victoria11==1 && victoria31==1) && victoria22==1){
         pagoganador1 = (bolsainicial * 0.05) + bolsainicial;
         pagoperdedor2 = bolsainicial - 40000;
         printf("\n Mayweather Jr se gana %d", pagoganador1); printf(" ""$$$");
         printf("\n Y Canelo Alvarez se lleva %d", pagoperdedor2); printf(" ""$$$");
    }
    else if((victoria21==1 && victoria31==1) && victoria12==1){
         pagoganador1 = (bolsainicial * 0.05) + bolsainicial;
         pagoperdedor2 = bolsainicial - 40000;
         printf("\n Mayweather Jr se gana %d", pagoganador1); printf(" ""$$$");
         printf("\n Y Canelo Alvarez se lleva %d", pagoperdedor2); printf(" ""$$$");
    }

    if(victoria11==1 && victoria21==1 && victoria31==1){
         pagoganador1 = (bolsainicial * 0.10) + bolsainicial;
         pagoperdedor2 = bolsainicial - 40000;
         printf("\n Mayweather Jr se gana %d", pagoganador1); printf(" ""$$$");
         printf("\n Y Canelo Alvarez se lleva %d", pagoperdedor2); printf(" ""$$$");
    }

    if((victoria11==1 && victoria21==1) && empate3132==1){
        pagoganador1 = (bolsainicial * 0.15) + bolsainicial;
        pagoperdedor2 = bolsainicial - 40000;
        printf("\n Mayweather Jr se gana %d", pagoganador1); printf(" ""$$$");
        printf("\n Y Canelo Alvarez se lleva %d", pagoperdedor2); printf(" ""$$$");
    }
    else if((victoria21==1 && victoria31==1) && empate1112==1){
        pagoganador1 = (bolsainicial * 0.15) + bolsainicial;
        pagoperdedor2 = bolsainicial - 40000;
        printf("\n Mayweather Jr se gana %d", pagoganador1); printf(" ""$$$");
        printf("\n Y Canelo Alvarez se lleva %d", pagoperdedor2); printf(" ""$$$");
    }
    else  if((victoria11==1 && victoria31==1) && empate2122==1){
        pagoganador1 = (bolsainicial * 0.15) + bolsainicial;
        pagoperdedor2 = bolsainicial - 40000;
        printf("\n Mayweather Jr se gana %d", pagoganador1); printf(" ""$$$");
         printf("\n Y Canelo Alvarez se lleva %d", pagoperdedor2); printf(" ""$$$");
    }

    if((victoria12==1 && victoria22==1) && victoria31==1){
          pagoganador2 = (bolsainicial * 0.05) + bolsainicial;
          pagoperdedor1 = bolsainicial - 40000;
          printf("\n Canelo Alvarez se gana %d", pagoganador2); printf(" ""$$$");
          printf("\n Y Mayweather Jr se lleva %d", pagoperdedor1); printf(" ""$$$");
    }
    else if((victoria12==1 && victoria32==1) && victoria21==1){
          pagoganador2 = (bolsainicial * 0.05) + bolsainicial;
          pagoperdedor1 = bolsainicial - 40000;
          printf("\n Canelo Alvarez se gana %d", pagoganador2); printf(" ""$$$");
          printf("\n Y Mayweather Jr se lleva %d", pagoperdedor1); printf(" ""$$$");
    }
    else if((victoria22==1 && victoria32==1) && victoria11==1){
          pagoganador2 = (bolsainicial * 0.05) + bolsainicial;
          pagoperdedor1 = bolsainicial - 40000;
          printf("\n Canelo Alvarez se gana %d", pagoganador2); printf(" ""$$$");
          printf("\n Y Mayweather Jr se lleva %d", pagoperdedor1); printf(" ""$$$");
    }

    if(victoria12==1 && victoria22==1 && victoria32==1){
         pagoganador2 = (bolsainicial * 0.10) + bolsainicial;
         pagoperdedor1 = bolsainicial - 40000;
          printf("\n Canelo Alvarez se gana %d", pagoganador2); printf(" ""$$$");
          printf("\n Y Mayweather Jr se lleva %d", pagoperdedor1); printf(" ""$$$");
    }

    if((victoria12==1 && victoria22==1) && empate3132==1){
         pagoganador2 = (bolsainicial * 0.15) + bolsainicial;
         pagoperdedor1 = bolsainicial - 40000;
          printf("\n Canelo Alvarez se gana %d", pagoganador2); printf(" ""$$$");
          printf("\n Y Mayweather Jr se lleva %d", pagoperdedor1); printf(" ""$$$");
    }
    else if((victoria22==1 && victoria32==1) && empate1112==1){
         pagoganador2 = (bolsainicial * 0.15) + bolsainicial;
         pagoperdedor1 = bolsainicial - 40000;
          printf("\n Canelo Alvarez se gana %d", pagoganador2); printf(" ""$$$");
          printf("\n Y Mayweather Jr se lleva %d", pagoperdedor1); printf(" ""$$$");
    }
    else  if((victoria12==1 && victoria32==1) && empate2122==1){
         pagoganador2 = (bolsainicial * 0.15) + bolsainicial;
         pagoperdedor1 = bolsainicial - 40000;
          printf("\n Canelo Alvarez se gana %d", pagoganador2); printf(" ""$$$");
          printf("\n Y Mayweather Jr se lleva %d", pagoperdedor1); printf(" ""$$$");
    }

}