#include <iostream>
#include "ControleDePagamentos.h"
#include "Pagamento.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(){
	
	Pagamento p1 = Pagamento("Samira", 10000);
	Pagamento p2 = Pagamento("Heloa", 2000);
	Pagamento p3 = Pagamento("Linda", 5000);
	
	ControleDePagamentos cp = ControleDePagamentos();
	
	cp.addPagamento(p1);
	cp.addPagamento(p2);
	cp.addPagamento(p3);
	
	cout << "Total pagamento: " << cp.calculaTotalDePagamentos() << endl;
	cout << "Existe Samira? " << cp.existePagamentoParaFuncionario("Samira") << endl;
	cout << "Existe Pedro? " << cp.existePagamentoParaFuncionario("Pedro") << endl; 
	
	return 0;
}
