#include <stdio.h>
#include "tab.h"
int main()
{
 
 int T[50]; 
 int N;    
 int I,J,c; 

do
{

 printf("Dimension du tableau (max.50) : ");
 scanf("%d", &N);
 while ((c=getchar() !='\n' && c != EOF));

} while (N < 2 ||  N >= 50);

supprimeOccurence(T,N);

printf("\n");
 
         
 
 return 0;
}
