#include "Pessoa.h"

Pessoa::Pessoa(){
	
	nome = "";
	idade = 0;
	telefone = 0;
}

std::string Pessoa::getNome(){
	
	return nome;
}

int Pessoa::getIdade(){
	
	return idade;
}

int Pessoa::getTelefone(){
	
	return telefone;
}

void Pessoa::setNome(std::string nNome){
	
	nome = nNome;
}

void Pessoa::setIdade(int nIdade){
	
	idade = nIdade;
}

void Pessoa::setTelefone(int nTelefone){
	
	telefone = nTelefone;
}
