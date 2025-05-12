#include <iostream>
#include <cstdio>

int main(){
    double temp, solo;
    int qtd, chuva;
    
    std::cin >> qtd;
    
    for (int i = 0; i <= qtd; i++){
        std::cin >> temp >> solo >> chuva;
        if(chuva == 1){
             std::cout << "NAO REGAR" << std::endl;
        } else{
               if (temp > 30.0 && solo < 50.0){
                  std::cout << "REGAR" << std::endl;
               }else{
                  std::cout << "NAO REGAR" << std::endl;
               }
        }
    }
    
    return 0;    
}
