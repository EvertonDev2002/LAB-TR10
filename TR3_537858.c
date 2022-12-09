/**
 * @file TR3_537858.c
 * @author Éverton Da Cunha Sousa | 537858 (evertoncc22@alu.ufc.br)
 * @brief Armazenar número em uma variável inteira de 0 até 5000 | Terceiro Trabalho de Laboratório de Programação
 * @version 0.1
 * @date 2022-09-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
     unsigned int binario[200] = {0} ; // Zera todas os valores do vetor
     int operador;

     for (int i = 0; i <= 5000; i++){ // Move os bits até 5000 ou até receber -1 
          
          printf("Digite um número de 0 a 5000: ");
          scanf("%d", &operador);

          if (operador == -1) break;

          binario[operador / 32] = binario[operador / 32] | (1 << (operador % 32));
     }

     printf("\n(sem repetição e em ordem crescente)\n");

     for (int i = 0; i <= 5000; i++){ // Imprime todos os números digitados sem repetição e em ordem crescente 
          if ((binario[i / 32] >> i) & 1){
               printf("Número digitado: ");
               printf("%d\n", i);
          }
     }

     return 0;
}