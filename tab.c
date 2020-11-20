#include<stdio.h>

int supprimeOccurence(int T[],int N){
    int I,J=0;
    char c;
    for (I=0; I<N; I++){
        do
        {
            printf(" Donner tableau[%d]",I);
            scanf("%d",&T[I]);
        } while ((c=getchar() !='\n' && c != EOF));
     }

     printf("Tableau donné: \n");
     for (I=0; I<N; I++){
    printf("%d ",T[I]);
     }
 printf("\n");

 for (I=0; I < N; I++)
 {
     T[J]=T[I];
     if (T[I]!=0)
     {
        J++;
     }    
 }
 N=J;

 printf("Tableau apres suppression: \n");
 

     for ( I = 0; I < N; I++)
     {
          printf("%d \n",T[I]);
     }
     printf("inverse du tableau:\n");

for ( int I=N-1;I>=0;I--)
 {
   printf("%d\n" ,T[I]);
 }

printf("affichage du TPOS[I]:\n");


 int TPOS[N];
 int TNEG[N];
 J=0;
     for (I=0;I<N;I++)
     {
         if (T[I]>0)
 {TPOS[J]=T[I];
 J++;
  
 }
}
for (I=0;I<J;I++)
 {
    printf("%d\n",TPOS[I]);
 }
 
 printf("affichage du TNEG[I]:\n");

J=0;
 for (I = 0; I < N; I++)
 {
   if (T[I]<0)
   {
       TNEG[J]=T[I];
       J++;
       
   }
 
 }
 for (I=0;I<J;I++)
   {
      printf("%d\n",TNEG[I]);
   }
   
   
}

