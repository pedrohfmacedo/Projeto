#ifndef PERCUSSAO_H
#include PERCURSAO_H

class Percussao: public Produtos {
	  
	   string tipo;
	   
	   public:
	   	
       Percussao ( string = "", string = "", float = 0.0, tipo = " ");
	   void set_tipo(string);
	   void get_tipo();	
	   
};
#endif