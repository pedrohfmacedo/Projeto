# ifndef VENDAS_H
# include VENDAS_H

// Declaração da classe
class Vendas : public Estoque{
	private:
		vector<Dados>lista_de_produtos;  // Declaração da vector
    public:
    	Vendas(); // Construtor
    	~Vendas(); // Destrutor
    	void set_faturamento(float);
    	float get_faturamento() const;	
    	void set_saldo(float);
    	float get_saldo(void) const;
        void Nota_fiscal(); // Nota fiscal das compras realizadas
		void Limpar_carrinho(); // 
    	
};

# endif
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