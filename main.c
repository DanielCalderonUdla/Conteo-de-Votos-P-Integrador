#include <stdio.h>
#include <string.h>

int main(void){

int voto, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, cand5 = 0;
float totalVotos, pCand1, pCand2, pCand3, pCand4, pCand5;

do
{
    printf("Ingrese el candidato que recibió un voto (1, 2, 3, 4, 5) (Terminar = 0))\n");
    scanf("%d", &voto);

    if (voto == 1)
    {
        cand1++; 
        printf("Se ha registrado un voto para el Candidato 1\n");
    } else if (voto == 2)
    {
        cand2++;
        printf("Se ha registrado un voto para el Candidato 2\n");
    } else if (voto == 3)
    {
        cand3++;
        printf("Se ha registrado un voto para el Candidato 3\n");
    } else if (voto == 4)
    {
        cand4++;
        printf("Se ha registrado un voto para el Candidato 4\n");
    } else if (voto == 5)
    {
        cand5++;
        printf("Se ha registrado un voto para el Candidato 5\n");
    } else if (voto == 0)
    {
        printf("Gracias por registrar todos los votos, estos son los resultados:\n");
    } else {
        printf("Ingrese un candidato valido\n");
    }

} while (voto != 0);

return 0;

}