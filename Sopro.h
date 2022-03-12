#ifndef SOPRO_H
#include SOPRO_H

class Sopro: public Produtos {
	  
	   string tonalidade;
	   
	   public:
	   	
       Sopro ( string = "", string = "", float = 0.0, tonalidade = " ");
	   void set_tonalidade(string);
	   void get_tonalidade();	
	   
};
#endif