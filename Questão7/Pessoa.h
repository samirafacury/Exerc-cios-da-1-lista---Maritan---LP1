#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa{
	
	protected:
		
		std::string nome;
		int idade;
		int telefone;
		
	public:
		
		Pessoa();
		
		std::string getNome();
		int getIdade();
		int getTelefone();
		
		void setNome(std::string nome);
		void setIdade(int idade);
		void setTelefone(int telefone);
};

#endif
