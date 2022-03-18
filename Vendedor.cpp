#include "CadastroVendedor.h"

Cadastro_vendedor::Cadastro_vendedor(string nome = " ", string cpf = " ", int chaveAcesso = 0){
	this->nome_vendedor=nome_vendedor;
	this->cpf=cpf;
	this->chaveAcesso=chaveAcesso;
}
	
void Cadastro_vendedor:: set_nome(string){
	this->nome=nome;
}
void Cadastro_vendedor::set_cpf(string){
	this->cpf=cpf;
	}
void Cadastro_vendedor::set_chaveAcesso(int){
	this->chaveAcesso=chaveAcesso;
	}
//Metodo para impressao dos dados
string Cadastro_vendedor::get_nome(){
	return nome;	
	}
string Cadastro_vendedor::get_cpf(){
	return cpf;
	}
int  Cadastro_vendedor::get_contato(){
	return contato;
	}
void Cadastro_cliente::get_vendedor(){
	cout << "VENDEDOR : " << nome_vendedor <<endl;
	cout << "CPF : " << cpf <<endl;
	cout << "NUMERO PARA CONTATO : " << contato <<endl;
}
