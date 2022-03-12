#ifndef TECLAS_H
#include TECLAS_H

class Teclas: public Produtos {
	  
	   string qtdOitavas;
	   
	   public:
	   	
       Teclas ( string = "", string = "", float = 0.0, qtdOitavas = " ");
	   void set_qtdOitavas(string);
	   void get_qtdOitavas();	
	   
};
#endif