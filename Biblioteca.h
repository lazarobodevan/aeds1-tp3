//
// Created by lazarus on 21/11/19.
//

#include "Texto.h"

//Lista encadeada
typedef struct CelulaB{
    struct CelulaB *pProx, *pAnte;
    int indice;
    TListaPLe texto;
}TCelulaT;

typedef struct {
    int tam;
    TCelulaT *pPrimeiro;
    TCelulaT *pUltimo;
}TListaTLe;

//Arranjo
typedef struct {
    TListaPArr *biblioteca;
    int primeiro;
    int ultimo;
}TListaTArr;

//Operacoes por arranjo
void inicializaBiblioArr(TListaTArr *lista, int qtdTextos);
void insereTextoArr(TListaTArr *lista,  int qtdtexto, int min, int max);
void removeTextoArr(TListaTArr *lista);
int tamanhoBibliotecaArr(TListaTArr *lista);
void imprimeBibliotecaArr(TListaTArr* lista);
void selectionSortBibArr(TListaTArr lista, int flag);
void quicksortBibArr(TListaTArr lista, int flag);
void ordenaBibArr(int esq, int dir, TListaTArr *lista, double* comp, double* mov);
void particaoBibArr(int esq, int dir, int* i, int* j, TListaTArr* lista, double* comp, double* mov);
void criaCopiaBibArr(TListaTArr* lista, TListaTArr* listacopia, int qtdTexto);

//Operacoes por lista encadeada
void inicializaBiblioLe(TListaTLe *lista);
void insereTextoLe(TListaTLe *lista, int qtdtexto, int min, int max);
void removeTextoLe(TListaTLe *lista);
int tamanhoBibliotecaLe(TListaTLe *lista);
void imprimeBibliotecaLe(TListaTLe *biblioteca);
void selectionSortBibLe(TListaTLe lista, int flag);
void quicksortBibLe(TListaTLe lista, int flag);
void ordenaBibLe(TCelulaT* esq, TCelulaT* dir, TListaTLe *texto, double* comp, double* mov);
void particaoBibLe(TCelulaT* esq, TCelulaT* dir, TCelulaT** ii, TCelulaT** jj, TListaTLe* texto, double* comp, double* mov);
void trocaBibLe(TCelulaT* i, TCelulaT* j);
void criaCopiaBibLe(TListaTLe* lista, TListaTLe* listacopia, int qtdTexto);
