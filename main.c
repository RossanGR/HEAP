#include <stdio.h>

void trocar(int* a, int* b){
  int aux = *a;
  *a = *b;
  *b = aux;
}

void heapify(int* l, int tam, int idxRaiz){
    int idxMaior = idxRaiz;
    int idxEsq = ( idxRaiz * 2) + 1;
    int idxDir = (idxRaiz * 2 + 1) + 1;

    if(idxEsq < tam && l[idxMaior] < l[idxEsq]){
      idxMaior = idxEsq;
    }

    if(idxDir < tam && l[idxMaior] < l[idxDir]){
      idxMaior = idxDir;
    }

    if(idxMaior != idxRaiz){
      trocar(&l[idxMaior], &l[idxRaiz]);

      heapify(l,tam, idxMaior);
    }



}

void heapSort(int* l, int tam){

}

void imprimirArray(int* l, int tam){
  int i;
  for(i = 0; i < tam; i++){
  printf("[");
    printf("%d", l[i]);
  printf("] ");
  }
}

int main(void) {
  
  int lista[] = {13,5,6,11,10,6,8,90,60,70,80,90,100};
  int tam =  sizeof(lista) / sizeof(lista[0]);
  imprimirArray(lista,tam);
  heapify(lista, tam, 1);
  printf("LISTA HIPEADA\n");
  imprimirArray(lista,tam);
  return 0;
}