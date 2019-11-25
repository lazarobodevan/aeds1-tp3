//
// Created by lazarus on 21/11/19.
//

/*
    TCelulaP = Tipo Celula de Palavra (celula contem uma palavra)
    TListaPLe = Tipo Lista de Palavras por Lista Encadeada = texto por lista encadeada
    TListaPArr = Tipo Lista de Palavras por Arranjo = texto por arranjo
 */

#include "Palavra.h"
//T-Item--------- Num tem mais kkkkjjjj
/*
typedef struct {
    Tletra *palavra;
}TPalavra;
*/
//Lista encadeada
typedef struct CelulaP{ //celula contendo uma palavra
    struct CelulaP *pProx;
    TListaLLe palavra; //cada celula tem uma palavra pra um conjunto de celulas se tornar um texto
}TCelulaP; //celula que vai armazenar palavra. Uma lista de palavras = texto

typedef struct {
    int tam;
    //chave da primeira letra de cada palavra;
    TCelulaP *pPrimeiro;
    TCelulaP *pUltimo;
}TListaPLe; //Lista de celulas contendo palavras = texto por lista encadeada

//Arranjo
typedef struct {
    TListaLArr *palavra;
    int primeiro;
    int ultimo;
}TListaPArr; //Arranjo de Palavras = texto

//Operacoes por arranjo
void inicializaTextoArr(TListaPArr *lista);
void inserePalavraArr(TListaLArr *palavra, TListaPArr *lista);
void removePalavraArr(TListaLArr *palavra, TListaPArr *lista);
void imprimeTextoArr(TListaPArr *listaPalavra);
int tamanhoTextoArr(TListaPArr *lista);

//Operacoes por Lista encadeada
void inicializaTextoLe(TListaPLe *lista);
void inserePalavraLe(TListaLLe *texto, TListaPLe *lista);
void removePalavraLe(TListaLLe *texto, TListaPLe *lista);
void imprimeTextoLe(TListaPLe *lista);
int tamanhoTextoLe(TListaPLe *lista);