#include <stdio.h>
int T[50];
int i;
int N;
char c;

int main(){ int test;

    do
    {printf("dimension du T[N]");
   test= scanf("%d",&N);
        /* code */
        while(((c=getchar())!='\n'&& c!=EOF));
    } while (test==0);
    
    printf("dimension du T[N]");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("%d",i);
        scanf("%d",&T[i]);
    }
    for(i=0;i<N;i++){
        if(T[i]!=0)
            printf("%d\n",T[i]);
          }
    printf("\n");
    
    
    return 0;
    }

