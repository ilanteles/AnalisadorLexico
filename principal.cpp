//Declaração de bibliotecas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "buffer.h"
#include "lexico.h"
#include "token.h"

using namespace std;


//Chamada do Analisador Lexico
int main ()
{
   //Nome do arquivo entre aspa dupla dentro do parenteses.
	arquivo("ArquivoFonte1.mln");
	
	FILE *arq_resultado;
	arq_resultado = fopen("resultado.txt", "w");
	token t;
	
	if(t.classe == 22){
      	fprintf(arq_resultado,"O arquivo cotém erros");
      }
      else
      {
      	fprintf(arq_resultado,"O Arquivo fonte foi analisado corretamente");
      }
      
    fclose(arq_resultado);
	
	
   //Retorna os tokens
   RetornaToken();
   return 0;

}
