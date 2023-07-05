#include <stdio.h>
#include <string.h>

int main(void){

int voto, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, cand5 = 0;
float totalVotos, pCand1, pCand2, pCand3, pCand4, pCand5;

do
{
    printf("Ingrese el candidato que recibió un voto (1, 2, 3, 4, 5) (Terminar = 0))\n");
    scanf("%d", &voto);



} while (voto != 0);

return 0;

}