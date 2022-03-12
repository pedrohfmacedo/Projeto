#ifndef CORDAS_H
#include CORDAS_H

class Cordas : public Produtos {
	  
	   int qtdCordas;
	   
	   public:
       Cordas( string = "", string = "", float = 0.0, qtdCordas = 0);
	   void set_qtdCordas(int);
	   int get_qtdCordas();	
};
#endif