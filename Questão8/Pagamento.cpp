#include "Pagamento.h"
#include <string>
#include <iostream>

Pagamento::Pagamento(){
}

Pagamento::Pagamento(std::string n, double v){
	valorpagamento = v;
	nomefuncionario = n;
}

double Pagamento::getValorPagamento(){
	return valorpagamento;
}
std::string Pagamento::getNomeDoFuncionario(){
	return nomefuncionario;
}
		
void Pagamento::setValorPagamento(double v){
	valorpagamento = v;
}
void Pagamento::setNomeDoFuncionario(std::string n){
	nomefuncionario = n;
}
	
