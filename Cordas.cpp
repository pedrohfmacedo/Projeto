#include "Cordas.h"

Cordas::Cordas(int qtdCordas=0){
	   this ->	qtdCordas = qtdCordas;
}

void Cordas::set_qtdCordas(int){
	this -> qtdCordas = qtdCordas;
}

int Cordas::get_qtdCordas(void){
	return qtdCordas;
}