#include <iostream>

//declarações de funções
void Quarto(bool &arrumado);
void itensQuarto(int &cama, int &armario, int &mesa, int &cadeira, bool &arrumado);
void verificarArrumado(int &cama, int &armario, int &mesa, int &cadeira, bool &arrumado);

int main()
{
    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    bool arrumado = false;
    int cama, armario, mesa, cadeira;

    std::cout << "Olá!,\n ainda está cedo...\n  mas já é hora de arrumar o quarto!\n             >:3\n\n";

    do {
        itensQuarto(cama, armario, mesa, cadeira, arrumado);
        verificarArrumado(cama, armario, mesa, cadeira, arrumado);
        if (!arrumado) {
            std::cout << "Quarto desarrumado! Vamos arrumá-lo já!\n";
        }
    } while (!arrumado);
 
    Quarto(arrumado);

    return 0;
}

void Quarto(bool &arrumado)
{
    if (arrumado) {
        std::cout << "\n\n                   Quarto arrumado!\n                    Parabéns! \(0w0)/ \n";
    }
    else {
        std::cout << "\n\n                   Quarto desarrumado!\n                    Vamos arrumá-lo já! \(-_-)/ \n";
    }
}

void verificarArrumado(int &cama, int &armario, int &mesa, int &cadeira, bool &arrumado) {
    if (cama == 1 && armario == 1 && mesa == 1 && cadeira == 1) {
        arrumado = true;
    } else {
        arrumado = false;
    }
}

void itensQuarto(int &cama, int &armario, int &mesa, int &cadeira, bool &arrumado){
    while (cama != 1) {
        std::cout << "                   Você arruma sua cama?\n                   Digite 1 se a cama estiver arrumada\n                   0 se não estiver\n                   ";
        std::cin >> cama;
        switch (cama)
        {
        case 0:
            std::cout << "Cama desarrumada!\nArrume-a já! >:/\n";
            break;
        case 1:
            std::cout << "Cama arrumada!\nParabéns! :D \n";
            break;
        default:
            std::cout << "Entrada inválida!\n";
            cama = -1; // Valor inválido para continuar no loop
            break;
        }
    }

    while (armario != 1) {
        std::cout << "                   Você arruma seu armário?\n                   Digite 1 se o armário estiver arrumado\n                   0 se não estiver\n                   ";
        std::cin >> armario;
        switch (armario){
        case 0:
            std::cout <<"Armário desarrumado!\nArrume-o já! >:/\n";
            break;
        case 1:
            std::cout << "Armário arrumado!\nParabéns! :D\n";
            break;
        default:
            std::cout << "Entrada inválida!\n";
            armario = -1; // Valor inválido para continuar no loop
            break;
        }
    }

    while (mesa != 1) {
        std::cout << "                   Você arruma sua mesa?\n                   Digite 1 se a mesa estiver arrumada\n                   0 se não estiver\n                   ";
        std::cin >> mesa;
        switch (mesa){
        case 0:
            std::cout << "Mesa desarrumada!\nArrume-a já! >:/\n";
            break;
        case 1:
            std::cout << "Mesa arrumada!\nParabéns! :D\n";
            break;
        default:
            std::cout << "Entrada inválida!\n";
            mesa = -1; // Valor inválido para continuar no loop
            break;
        }
    }

    while (cadeira != 1) {
        std::cout << "                   Você arruma sua cadeira?\n                   Digite 1 se a cadeira estiver arrumada\n                   0 se não estiver\n                   ";
        std::cin >> cadeira;
        switch (cadeira){
        case 0:
            std::cout << "Cadeira desarrumada!\nArrume-a já! >:/\n";
            break;
        case 1:
            std::cout << "Cadeira arrumada!\nParabéns!:D\n";
            break;
        default:
            std::cout << "Entrada inválida!\n";
            cadeira = -1; // Valor inválido para continuar no loop
            break;
        }
    }
}