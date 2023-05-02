#include <stdio.h>
int main()
{
    int vet[10],i, cont=0;
    for(i=0;i<10;i++){
        printf("Digite um valor: ");
        scanf("\n%d",&vet[i]);
        if(vet[i]>100){
            cont++;
        }
    }
    printf("\n");
    printf("Existe %d numeros maiores que 100",cont);
    return 0;
}
