#ifndef PRODUTO_H
#define PRODUTO_H


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