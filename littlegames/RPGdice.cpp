#include <iostream>

int main(){

    srand(time(NULL));

    int valor_dado;
    int num;
    int tries;
      
    do { 
        std::cout << "Digite o valor do dado: ";
        std::cin >> valor_dado;
        tries++;

        if (valor_dado == 4 || valor_dado == 6 || valor_dado == 8 || valor_dado == 10 || valor_dado == 12 || valor_dado == 20 || valor_dado == 100) {
            std::cout << "Você jogou um d" << valor_dado << '\n';
            num = (rand() % valor_dado) + 1;
            std::cout << "Você tirou: " << num << '\n';
        } 
        else {
            std::cout << "Ei! Esse dado não existe!" << '\n';
            std::cout << "Os dados válidos são: d4, d6, d8, d10, d12, d20 e d100" << '\n';
            std::cout << "Tente novamente! Você tentou " << tries << " vezes" << '\n';
        }
    } while (valor_dado != 4 && valor_dado != 6 && valor_dado != 8 && valor_dado != 10 && valor_dado != 12 && valor_dado != 20);

    return 0;
}
    