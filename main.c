#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 15
#define SAT 5

main() {
  int x, vet[SAT], votos = 0;
  char codigo;
  float per[SAT];
  for(x = 0; x < SAT; x++){
    vet[x] = 0;
  }
  printf("Pesquisa de Satisfação\n");
  do{
    printf("\nCódigo - Grau de Satisfação\ne - Satisfeito\nc - Contente\nm - Meia-boca\nu - Uma droga\nn - Voto nulo\nVoto: ");
    scanf("%c", &codigo);
    getchar();
    switch (codigo){
      case 'e':
      case 'E':
        vet[0]++;
        votos++;
      break;
      case 'c':
      case 'C':
        vet[1]++;
        votos++;
      break;
      case 'm':
      case 'M':
        vet[2]++;
        votos++;
      break;
      case 'u':
      case 'U':
        vet[3]++;
        votos++;
      break;
      case 'n':
      case 'N':
        vet[4]++;
        votos++;
      break;
      default:
      printf("\nOpção inválida\n");
    }
  }while(votos != MAX);
  printf("\n");
  printf("Votos em Satisfação: %i\n", vet[0]);
  printf("Votos em Contente: %i\n", vet[1]);
  printf("Votos em Meia-boca: %i\n", vet[2]);
  printf("Votos em Uma droga: %i\n", vet[3]);
  printf("Votos nulos: %i\n", vet[4]);
  for(x = 0; x < SAT; x++){
    per[x] = vet[x] * 100;
    per[x] = per[x] / 15;
  }
  printf("\n--Percentual de votos-- \nSatisfação: %.1f\nContente: %.1f\nMeia-boca: %.1f\nUma droga: %.1f\nNulos: %.1f", per[0], per[1], per[2], per[3], per[4]);
  getchar();
}