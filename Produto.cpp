#include "Produto.h"


Produto::Produto ( string = "", string = "", float = 0.0){
	this->nome = nome;
	this->cor = cor;
	this->precoVenda = precoVenda;
	this->precoFabrica = precoFabrica;
	this->qunatidade = qunatidade;
}

Produto::~Produto(){
	
}

void Produto::set_nome(string nome){
	this->nome = nome;	
}

string Produto::get_nome() const{
	return nome;
}

void Produto::set_cor(string cor){
	this->cor = cor;
}

string Produto::get_cor() const{
	return cor;
}

void Produto::set_precoVenda(float precoVenda){
	this->precoVenda = precoVenda;
}

float Produto::get_precoVenda() const{
	return precoVenda;
}

void Produto::set_precoFabrica(float precoFabrica){
	this->precoFabrica = precoFabrica;
}

float Produto::get_precoFabrica() const{
	return precoFabrica;
}

int Produto::get_quantidade() const{
	return quantidade;
}

void Produto::set_quantidade(int quantidade){
	this->quantidade = quantidade;
}

void imprime(){
	cout<<"Nome do Produto: "<<get_nome()<<endl
		<<"Cor: "<<get_cor()<<endl
		<<"Preço de Venda: "<<get_precoVenda()<<endl
		<<"Preço de Fábrica: "<<get_precoFabrica()<<endl
		<<"Quantidade: "<<get_quantidade()<<endl;
}
