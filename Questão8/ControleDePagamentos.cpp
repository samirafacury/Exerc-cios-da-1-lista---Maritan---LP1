#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <string>
using namespace std;


ControleDePagamentos::ControleDePagamentos(){
	iAtual = 0;
}

void ControleDePagamentos::addPagamento(Pagamento p){
	pagamentos[iAtual] = p;
	iAtual++;
}
double ControleDePagamentos::calculaTotalDePagamentos(){
	double total = 0;
	for(int i=0;i < iAtual;i++){
		total += pagamentos[i].getValorPagamento();
	}	
	return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string n){
	int i;
	
	for(i=0;i<iAtual;i++){		
		if(pagamentos[i].getNomeDoFuncionario().compare(n) == 0){
		cout << pagamentos[i].getNomeDoFuncionario() << "::" << pagamentos[i].getValorPagamento() << endl;
		return true;
		}
	}
	return false;
}
