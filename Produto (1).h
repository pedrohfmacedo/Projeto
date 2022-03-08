#ifndef produto_H
#define produto_H


Class Produto {
	private:
		string nome;
		string nipe;
		float preco;
		int quantidade; 
		
    public:
	//Construtor e destrutor
		Produto ( string = "", string = "", float = 0.0);
		~Produto();
		//métodos para atribuição (set) e retorno (get) de dados.
		void setnome(string);
		string getnome() const;
		void setnipe(string);
		string getnipe() const;
		void setpreco(float);
		float getpreco() const;
		int getquantidade() const;
		void setquantidade(int);
		void imprime(void);
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