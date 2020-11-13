#include<stdio.h>
float max(float tab[] , int N){    // fontion  float
  int i,maxi=0;
   for(i=0;i<N;i++){ 
       printf("veuillez entre une valeur tab[%d]\n ",i);
       scanf("%f",&tab[i]);

   }
    for(int i=1;i<N;i++){
         if (tab[i]>tab[maxi])
         {
             maxi = i;  
         }
    }


    printf("la position du max est %d\n",maxi);
    printf("la valeur max est %f\n",tab[maxi]);
    
    return 0 ;
}