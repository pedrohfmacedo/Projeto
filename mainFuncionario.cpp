/*UFCG - CCEI - ENGENHARIA ELETRICA 2020.2
TECNICAS DE PROGRAMACAO 
PROFESSOR: MARCUS SALERNO
GRUPO: David Emanuel Albuquerque dos Santos- Turma 02
José Vanilson de Brito Júnior - Turma 01
Lameque Dias de Oliveira - Turma 01
Pedro Henrique Fernandes Macêdo -  Turma 02
Felipe Faustino do Nascimento- Turma 02
Monitora:Ravânia Luciano Martildes
PROJETO: LOJA DE INSTRUMENTOS MUSIDOM 
DESCRIÇÃO: O programa deve realizar diversas funções entre eles, o cadastro de 
produto, de cliente, e vendedores, gerenciar o estoque da loja, realizar pedidos
MAIN TESTE PARA CLASSE VENDEDOR
 */
#include <iostream>
#include <fstream>
#include <locale>
#include <iomanip>
#include <vector>
#include <cstdlib>


using namespace std;

#include "Vendedor.cpp"

int main(){
	
	Cadastro_vendedor MUSIDOM("Marcus","704.345.184-85",2);
	MUSIDOM.get_imprimavendedor();
	
}