#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>
#include <string>

class Pagamento{
	public:
		
		Pagamento();
		Pagamento(std::string n, double v);
		double getValorPagamento();
		std::string getNomeDoFuncionario();
		
		void setValorPagamento(double v);
		void setNomeDoFuncionario(std::string n);
	
	private:
		double valorpagamento;
		std::string nomefuncionario;

};

#endif
