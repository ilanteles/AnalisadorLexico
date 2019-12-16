	1. Buffer.h

  	Arquivo onde se encontra a função que passa como argumento o endereço do arquivo, se ele pode ser aberto, caso não consiga será emitido um erro na tela informando que o arquivo não pode ser aberto. E uma função que controla o ApontadorAdiante e a quantidade de linha para que possa retornar  do vetor o caracter correto para a verificação do lexema.

	2. Lexico.h

	Nesse arquivo é onde esta a linguagem  TINY que contem apenas a implementação do código em base de geração de autômatos e a função FalhouAutomatos, caso haja a necessidade de uma troca de linguagem ao alguma alteração na própria linguagem, a modificação será feita apenas nesse arquivo não precisando alterar o restante.
	
	3. Léxico.h

	Nesse arquivo esta a função “void RetornaToken ()”que  chama  o  prcedimento  ProximoToken e retorna os tokens encontrados.

	4. Principal.cpp

	No arquivo contem o corpo principal, estão sendo chamados os procedimentos arquivo("Nome_Arquivo") e RetornaToken, necessário para a execução do Analisador Léxico.
