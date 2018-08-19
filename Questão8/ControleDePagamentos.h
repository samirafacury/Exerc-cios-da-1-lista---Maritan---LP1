#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"

class ControleDePagamentos
{
	public:
		ControleDePagamentos();
		void addPagamento(Pagamento p);
		double calculaTotalDePagamentos();
		bool existePagamentoParaFuncionario(std::string n);
		
	private:
		Pagamento pagamentos[1000];
		int iAtual;
};

#endif
