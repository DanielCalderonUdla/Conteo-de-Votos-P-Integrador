#include <stdio.h>
#include <string.h>

int main(void){

int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, cand5 = 0;
float totalVotos, pCand1, pCand2, pCand3, pCand4, pCand5;
char nCand1[20], nCand2[20], nCand3[20], nCand4[20], nCand5[20], voto[20];

printf("Ingrese el nombre del candidato 1\n");
scanf("%s", nCand1);

printf("Ingrese el nombre del candidato 2\n");
scanf("%s", nCand2);

printf("Ingrese el nombre del candidato 3\n");
scanf("%s", nCand3);

printf("Ingrese el nombre del candidato 4\n");
scanf("%s", nCand4);

printf("Ingrese el nombre del candidato 5\n");
scanf("%s", nCand5);

do
{
    printf("Ingrese el candidato que recibió un voto (Para terminar escribir terminar))\n");
    scanf("%s", voto);

    

} while (voto != 0);

totalVotos = cand1 + cand2 + cand3 + cand4 + cand5;
pCand1 = (cand1 * 100) / totalVotos;
pCand2 = (cand2 * 100) / totalVotos;
pCand3 = (cand3 * 100) / totalVotos;
pCand4 = (cand4 * 100) / totalVotos;
pCand5 = (cand5 * 100) / totalVotos;

printf("Total de votos: %d\n", (int)totalVotos);
printf("Votos por el Candidato 1: %d | Porcentaje: %.2f %% \n", cand1, pCand1);
printf("Votos por el Candidato 2: %d | Porcentaje: %.2f %% \n", cand2, pCand2);
printf("Votos por el Candidato 3: %d | Porcentaje: %.2f %% \n", cand3, pCand3);
printf("Votos por el Candidato 4: %d | Porcentaje: %.2f %% \n", cand4, pCand4);
printf("Votos por el Candidato 5: %d | Porcentaje: %.2f %% \n", cand5, pCand5);

return 0;

}