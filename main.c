#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float prix;
    int nbc;
    printf("Donnez nombre le Copie :");
    scanf("%d",&nbc);
    if(nbc<=10)
    {
        prix=nbc*1;

    }
    else
    if(nbc<=30)
    {
        prix=(10*1)+(nbc-10)*0.5;
    }
    else
    {
        prix=(10*1)+(20*0.5)+(nbc-30)*0.2;
    }
    printf("le prix est:%.2f",prix);
    return 0;
}
