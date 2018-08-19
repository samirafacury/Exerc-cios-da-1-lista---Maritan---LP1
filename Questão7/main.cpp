#include <iostream>
#include "Pessoa.h"

int main(void){
	
	Pessoa pessoa1 = Pessoa();
	Pessoa pessoa2 = Pessoa();
	
	pessoa1.setNome("Samira");
	pessoa1.setIdade(22);
	pessoa1.setTelefone(44444444);
	
	pessoa1.setNome("Joao");
	pessoa1.setIdade(55);
	pessoa1.setTelefone(88888888);

	
	return 0;
}
