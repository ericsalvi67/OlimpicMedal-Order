#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 8

typedef struct MEDAL
{
    char nome[50];
    int ouro;
    int prata;
    int bronze;
}MEDAL;

void ordena (MEDAL v[N])
{
    int i,j;
    MEDAL aux;

    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(v[j].ouro<v[j+1].ouro)
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
            else if(v[j].ouro==v[j+1].ouro && v[j].prata<v[j+1].prata)
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
            else if(v[j].ouro==v[j+1].ouro && v[j].prata==v[j+1].prata && v[j].bronze<v[j+1].bronze)
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
            else if(v[j].ouro==v[j+1].ouro && v[j].prata==v[j+1].prata && v[j].bronze==v[j+1].bronze && strcmp(v[j].nome,v[j+1].nome)>0)
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}

void mostra(MEDAL v[N])
{
    int i;

    printf(" PAIS | OURO | PRATA | BRONZE\n");
    for(i=0;i<N;i++)
    {
        printf("%s % 2d % 2d % 2d \n",v[i].nome,v[i].ouro,v[i].prata,v[i].bronze);
    }
}

int main()
{
    MEDAL v[N];
    int i;

    for(i=0;i<N;i++)
    {
        printf("NOME PAIS: ");
        gets(v[i].nome);
        printf("MEDALHAS (OURO-PRATA-BRONZE): ");
        scanf("%d%d%d", &v[i].ouro,&v[i].prata,&v[i].bronze);
        fflush(stdin);
    }

    ordena(v);
    mostra (v);
}
