#include <iostream>

int main(){
	int qtd, n1, n2;
	
	std::cin >> qtd;
	
	int a[qtd], b[qtd];
	
	int cont = 0;
	
	do{
		std::cin >> n1 >> n2;
		
		a[cont] = n1;
		b[cont] = n2;
		cont++;
	}while(cont < qtd);
	
	for(int i = 0; i < qtd; i++){
		if(a[i] > b[i] && (a[i] + b[i]) > 40){
			std::cout << "DOROTHY DECIDE E A NONNA VAI" << std::endl;
		} else if(a[i] > b[i]){
			std::cout << "DOROTHY DECIDE" << std::endl;
		} else if(a[i] < b[i] && (a[i] + b[i]) > 40){
			std::cout << "DAGMAR DECIDE E A NONNA VAI" << std::endl;
		} else{
			std::cout << "DAGMAR DECIDE" << std::endl;
		}
	}
	
	return 0;
}
