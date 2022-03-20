#ifndef ESTOQUE_H
#define ESTOQUE_H
class Estoque
{   // Definindo vectors
	vector <Produto> Lista_Produto;

	// Método para ler produto
	void lerProduto;

public:
    // Método para inserir produto
    bool inserirProduto(Produto);

    // Método para remover produto
    bool removerProduto(long int);

    // Métodos para pesquisar produto
    bool pesquisarProduto(string) const;
    bool pesquisarProduto(long int) const;

    // Método para salvar produto
    bool salvarProduto();

	bool set_SaidaEstoqueProduto(unsigned int, int);
	bool set_EntradaEstoqueProduto(unsigned int, int);

	// Método para imprimir produto
	void imprimeProduto() const;

	// Método para ordenar produto
    void ordenaProduto();

	int get_indiceProduto(string) const;
	vector <Produto> get_ListaProduto() const;
};
#endif
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
 */
